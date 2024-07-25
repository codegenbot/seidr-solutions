def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        for word in words:
            if not any(char.isalnum() for char in word):
                words.remove(word)
    return sum(
        1 for i in range(ord("a"), ord("z") + 1) if (txt.lower().count(chr(i)) % 2 != 0)
    )