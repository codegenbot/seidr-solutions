```
def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    total_fruit = 0
    for word in s.split():
        if word.lower() == "apple" or word.lower() == "orange":
            total_fruit += 1

    max_per_box = min(total_fruit, n)
    remaining_fruits = total_fruit - (max_per_box * n)

    return int(((total_fruit - 1) / max_per_box) + 0.5) if max_per_box != 0 else 0