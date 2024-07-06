def split_words(txt):
    words = txt.split()
    if len(words) > 0 and "," in words[0]:
        return [word for word in words if "," in word]
    elif len(words) == 1:
        return sum(
            1
            for char in txt.lower()
            if "a" <= char <= "z" and (ord(char) - ord("a")) % 2 != 0
        )
    else:
        return words