def fruit_distribution(s, n):
    s = s.replace("apples", "a").replace("oranges", "o")
    count = {"a": 0, "o": 0}
    for word in s.split():
        if word.isdigit():
            n = int(word)
        elif word in count:
            count[word] += 1
    return n - count["a"] - count["o"]