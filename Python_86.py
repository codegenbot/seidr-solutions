def anti_shuffle(s):
    words = s.split()
    new_words = ["".join(sorted(word)) for word in words]
    return " ".join(new_words)