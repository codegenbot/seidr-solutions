def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    words = s.split()
    apples = int(words[2])
    oranges = int(words[6])
    return n - apples - oranges