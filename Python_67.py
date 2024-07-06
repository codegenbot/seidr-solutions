def fruit_distribution(s, n):
    words = s.split()
    for i in range(len(words)):
        if words[i].lower() == "apples" or words[i].lower() == "oranges":
            n -= int("".join(filter(str.isdigit, words[:i]))) + int(
                "".join(filter(str.isdigit, words[i + 2 :]))
            )
    return n