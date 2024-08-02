def split_words(txt):
    words = txt.split()
    if any(char.isalnum() for char in words[0]):
        return words
    else:
        return sum(
            ord(c) - ord("a")
            for c in txt.lower()
            if "abcdefghijklmnopqrstuvwxyz".index(c) % 2 != 0
        )