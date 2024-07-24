```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        txt = txt.replace(",", " ")
        words = txt.split()
        if len(words) > 0:
            return words
        else:
            result = 0
            for char in txt.lower():
                if ord(char) - ord('a') % 2 == 1 and 'z' >= char >= 'a':
                    result += 1
            return result