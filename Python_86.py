def anti_shuffle(s):
    words = s.split()
    return " ".join(word for word in ("".join(sorted(char)) for char in words))