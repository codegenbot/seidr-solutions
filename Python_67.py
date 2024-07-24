```
def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    total_fruit = 0
    for word in s.split():
        if word.lower() == "apple" or word.lower() == "orange":
            total_fruit += 1

    max_per_box = min(total_fruit // (n + 1), n)
    remaining_fruits = total_fruit - ((total_fruit // (n + 1)) * (n + 1))

    return (
        int(-((-remaining_fruits) / float(max_per_box)) + 0.5)
        if max_per_box != 0
        else remaining_fruits
    )