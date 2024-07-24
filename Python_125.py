```
def split_words(txt):
    words = txt.split()
    if len(words) > 1:
        return words
    else:
        for i in range(len(txt)):
            if txt[i].isalpha() and ord(txt[i].lower()) % 2 != 0:
                return i + 1
        return -1