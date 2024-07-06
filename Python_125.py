def split_words(txt):
    words = txt.split()
    if len(words) > 0 and all(char.isalnum() for char in words[0]):
        return [words[0]]
    else:
        return [word for word in txt.split(",") if word]
    if not any(word for word in txt.split()):
        return sum(1 for c in txt.lower() if ord(c) % 2 == 1)