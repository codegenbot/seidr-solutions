def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        return sum(
            1
            for i in range(ord("a"), ord("z") + 1)
            if (txt.replace(",", "")[i - ord("a")].islower())
        )