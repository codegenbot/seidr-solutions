def fruit_distribution(s, n):
    s = s.replace("apples", "1 apple").replace("oranges", "1 orange")
    total_apple = (s.lower().count("apple") - 1) * (s.lower().count("1 apple"))
    total_orange = (s.lower().count("orange") - 1) * (s.lower().count("1 orange"))
    total_fruit = total_apple + total_orange
    max_per_box = min(total_fruit // (n + 1), n)
    remaining_fruits = total_fruit - (max_per_box * (n + 1))

    return (
        int(-(-total_fruit / float(max_per_box)) + 0.5)
        if max_per_box != 0
        else total_fruit
    )