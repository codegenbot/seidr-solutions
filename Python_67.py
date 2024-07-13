def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    return n - sum(int(word) for word in s.split() if word.isdigit())