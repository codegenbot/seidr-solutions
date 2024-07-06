```
def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in words[0]):
        return [words[i] for i in range(len(words)) if i % 2 != 0]
    elif ',' in words[0]:
        return [''.join([word for word in words if word != '']) for word in set(words)]
    else:
        return sum(1 for char in txt.lower() if ord(char) % 2 == 1)