def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) == 0:
            result.append(" ")
        else:
            result.append("".join(sorted(word)))
    return " ".join(result)