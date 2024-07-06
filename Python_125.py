def split_words(txt):
    if " " in txt:
        return txt.split()
    elif "," in txt:
        return txt.split(",")
    else:
        odd_count = sum(1 for c in txt.lower() if ord(c) - ord("a") % 2 != 0)
        return odd_count