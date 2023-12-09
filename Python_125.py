def split_words(txt):
    if ' ' in txt:
        return txt.split()
    elif ',' in txt:
        return txt.split(',')
    else:
        count = 0
        for char in txt:
            if ord('a') <= ord(char) <= ord('z'):
                count += 1
        return count