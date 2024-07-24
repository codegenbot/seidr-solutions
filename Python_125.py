```
def split_words(txt):
    words = txt.split()
    if len(words) > 1 and all(not word.replace(',', '').isalnum() for word in words[1:]):
        return [words[0]] + split_words(' '.join(words[1:]))
    elif any(',' in word for word in words):
        return split_words(', '.join(word.split(',') for word in words))
    else:
        return sum(ord(c) - ord('a') for c in txt.lower() if 'a' <= c <= 'z' and (ord(c) - ord('a')) % 2 != 0)