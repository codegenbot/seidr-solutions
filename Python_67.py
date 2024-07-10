def fruit_distribution(s, n):
    words = s.split()
    for i in range(len(words)):
        if words[i] == "apples" or words[i] == "oranges":
            n -= int("".join(filter(str.isdigit, words[i - 1 : i + 2])))
    return n