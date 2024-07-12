def anti_shuffle(s):
    return " ".join(word[::-1] if word.isalpha() else word for word in s.split())