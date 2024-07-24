def fruit_distribution(s, n):
    s = s.replace("apples", "1 apple").replace("oranges", "1 orange")
    total_fruit = 0
    for word in s.lower().split():
        if "apple" in word or "orange" in word:
            digit_str = "".join(filter(str.isdigit, word)).lstrip("0123456789")
            total_fruit += int(digit_str) if digit_str else 0
    max_per_box = min(total_fruit // n, n)
    remaining_fruits = total_fruit - (max_per_box * n)

    return int(-(-total_fruit / float(max_per_box)) + 0.5) if max_per_box != 0 else total_fruit