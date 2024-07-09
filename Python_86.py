def anti_shuffle(s):
    return " ".join(["".join(sorted(word)) if word else " " for word in s.split()])