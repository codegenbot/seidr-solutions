def fruit_distribution(s, n):
    apples_and_oranges = s.split(" ")
    apples = int(apples_and_oranges[0])
    oranges = int(apples_and_oranges[2])
    return n - apples - oranges