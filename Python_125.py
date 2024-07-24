def split_words(txt):
    if any(char.isalnum() for char in txt) and any(char.isspace() for char in txt):
        return txt.split()
    elif all(not char.isspace() for char in txt):
        return sum(
            ord(char) - 96
            for char in txt.lower().replace(",", "")
            if ord("a") <= ord(char) - 96 <= ord("z")
        )
    else:
        return sum(1 for char in txt.lower().replace(",", "").replace(" ", "."))