def fruit_distribution(s, n):
    words = s.split()
    for i in range(1, len(words), 2): 
        if words[i].endswith("apples") or words[i].endswith("oranges"):
            if int(words[i-1]) + 11 <= n:
                n -= (int(words[i-1]) + 11)
            else:
                return -1
    return n