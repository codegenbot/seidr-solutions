def split_words(txt):
    words = txt.split()
    if not any(char in word for word in words for char in ",.!?"):
        return len(
            [
                char
                for i, char in enumerate("abcdefghijklmnopqrstuvwxyz")
                if ord(char) % 2 != 0 and char.lower() in txt
            ]
        )
    else:
        return words