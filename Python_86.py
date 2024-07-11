def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) > 1:
            new_word = "".join(sorted(word, reverse=True))
            result.append(new_word)
        else:
            result.append(word)
    return " ".join(result)