def anti_shuffle(s):
    return " ".join(
        ["".join(sorted(word)) if word.isalpha() else word for word in s.split(" ")]
    )