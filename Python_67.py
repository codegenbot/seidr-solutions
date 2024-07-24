```
def fruit_distribution(s, n):
    if not isinstance(s, str) or not isinstance(n, int):
        return "Invalid input"
    import re


    pattern = r"(\d+)\s*(apples|oranges)"
    quantities = [int(x[0]) for x in re.findall(pattern, s.lower())]

    apples, oranges = (
        sum(1 if x == "apples" else 0 for x in (re.findall(pattern, s.lower()))),
        len(quantities) - apples,
    )
    total_fruit = sum(quantities)

    max_per_box = min(total_fruit // n, n)
    remaining_fruits = total_fruit - (max_per_box * n)

    boxes = []
    for i in range(n):
        box = 0
        if i < remaining_fruits // (n - i):
            box = max_per_box + 1
        else:
            box = max_per_box
        boxes.append(box)

    return sum(boxes)