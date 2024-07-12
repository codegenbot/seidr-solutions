def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    elif "," in txt:
        return txt.split(",")
    else:
        odd_count = sum(
            1
            for i, c in enumerate(map(chr, range(ord("a"), ord("z") + 1)))
            if c.lower() in txt
        )
        return odd_count