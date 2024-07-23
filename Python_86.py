def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        new_word = "".join(sorted(word))
        while len(new_word) < len(word):
            new_word += "a"
    result.append(new_word)
    return " ".join(result)