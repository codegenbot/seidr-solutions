def split_words(txt):
    words = txt.split()
    if not any(char in word for word in words):
        return len(
            [
                i
                for i, char in enumerate(txt)
                if "a" <= char <= "z" and (ord(char) - ord("a")) % 2 != 0
            ]
        )
    else:
        return words