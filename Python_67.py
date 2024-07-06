def fruit_distribution(s, n):
    words = s.split()
    for i in range(len(words)):
        if words[i].endswith("apples") or words[i].endswith("oranges"):
            n -= int(words[i - 1]) + 11
    return n