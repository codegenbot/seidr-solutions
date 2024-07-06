def fruit_distribution(s, n):
    num_apples = int(list(map(int, s.split()))[0])
    num_oranges = int(list(map(int, s.split().replace("and", ""))))
    return n - num_apples - num_oranges