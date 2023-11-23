def fruit_distribution(s, n):
    words = s.split()
    apples = int(words[0]) if words[0].isdigit() else 0
    oranges = int(words[-2]) if words[-2].isdigit() else 0
    return n - apples - oranges