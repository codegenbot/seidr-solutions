def fruit_distribution(s, n):
    words = s.split()
    for i in range(len(words)):
        if words[i].endswith("apples") or words[i].endswith("oranges"):
            num = int(words[i - 1])
            break
    return n - num