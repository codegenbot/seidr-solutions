def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        for word in words:
            if not any(char.isalnum() for char in word):
                words.remove(word)
    return len(words)