def anti_shuffle(s):
    return " ".join([sorted(word) for word in s.split()])