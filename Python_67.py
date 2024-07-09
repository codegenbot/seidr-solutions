def fruit_distribution(s, n):
    words = s.split()
    for i in range(len(words)):
        if words[i].startswith("apples") or words[i].startswith("oranges"):
            n -= int(words[i - 1]) + 1
    return n