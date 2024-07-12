def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        result = sum(1 for i in range(ord('a'), ord('z')+1) if txt.count(chr(i)) % 2 != 0)
        return result