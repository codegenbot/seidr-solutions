def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    total_fruit = 0
    for word in s.split():
        if word.lower() == "apple" or word.lower() == "orange":
            total_fruit += 1

    max_per_box = min(total_fruit // 2, n)
    remaining_fruits = total_fruit - max_per_box * 2

    return min(n, max_per_box + (remaining_fruits + max_per_box) // n)