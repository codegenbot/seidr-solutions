def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        char_list = sorted(word)
        new_word = "".join(char_list)
        result.append(new_word if len(word) == len(new_word) else word)
    return " ".join(result)