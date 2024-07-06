def split_words(txt):
    words = txt.split()
    if len(words) > 0 and all(c.isalnum() for c in words[0]):
        return [words[0]]
    elif "," in txt:
        return txt.split(",")
    else:
        odd_count = sum(
            1 for c in txt.lower() if ord("a") <= ord(c) - ord("a") % 2 == 0
        )
        return odd_count