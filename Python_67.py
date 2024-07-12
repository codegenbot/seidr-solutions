def fruit_distribution(s, n):
    words = s.split()
    mangoes = (
        n
        - int(words[words.index("apples") - 1].split()[0])
        - int(words[words.index("oranges") - 1].split()[0])
    )
    return mangoes