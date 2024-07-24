def fruit_distribution(s, n):
    s = s.replace("apples", "1 apple").replace("oranges", "1 orange")
    total_fruit = 0
    for word in s.lower().split():
        if "apple" in word or "orange" in word:
            total_fruit += int("".join(filter(str.isdigit, word))) or 0