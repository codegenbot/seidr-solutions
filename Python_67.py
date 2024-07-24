def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    total_fruit = 0
    for word in s.split():
        if word.lower() == "apple" or word.lower() == "orange":
            total_fruit += 1
    return n - total_fruit // 2