def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        new_word = "".join(sorted(word))
        result.append(new_word)
    return " ".join(result) if len(words) > 1 else s