def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        if "," in txt:
            return txt.replace(",", " ").split()
        else:
            result = [i for i in range(len(txt)) if ord(txt[i].lower()) % 2 == 1]
            return len(result)