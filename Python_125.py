def split_words(txt):
    words = txt.split()
    if any(char.isalnum() for char in txt) and any(char == "," for char in txt):
        return [word for word in txt.split(",")]
    elif all(not char.isalnum() or char == "," for char in txt):
        return sum(1 for c in txt.lower() if "a" <= c <= "z" and ord(c) % 2 != 0)
    else:
        return words