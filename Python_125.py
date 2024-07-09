def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in txt) and not any(
        char == "," for char in txt
    ):
        return sum(
            1 for i in range(ord("a"), ord("z") + 1) if chr(i).lower() in txt.lower()
        )
    else:
        return words