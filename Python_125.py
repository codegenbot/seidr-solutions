def split_words(txt):
    return (
        txt.split()
        if any(char.isspace() for char in txt)
        else (
            txt.split(",")
            if any(char == "," for char in txt)
            else sum(1 for i in range(len(txt)) if ord(txt[i].lower()) % 2 != 0)
        )
    )