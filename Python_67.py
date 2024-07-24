```
def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    total_fruit = 0
    apple_count = 0
    for word in s.split():
        if word.lower() == "apple":
            apple_count += 1
        elif word.lower() == "orange":
            total_fruit += 1 + apple_count // 2
    return min(n - total_fruit, n // 2)