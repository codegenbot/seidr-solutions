def fruit_distribution(s, n):
    numbers = s.split(" ")
    apples, oranges = map(int, numbers[1::2])
    return n - apples - oranges