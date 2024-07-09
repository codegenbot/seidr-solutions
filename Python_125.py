def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        for i in range(26):
            if chr(ord("a") + i).lower() in txt.lower():
                return [chr(ord("a") + i)]
        return []