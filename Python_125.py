```
def split_words(txt):
    if not txt:  
        return 0
    words = txt.split()
    if any(char.isalnum() for char in words[0]):
        return len(words)
    else:
        return sum(
            1
            for i in range(ord("a"), ord("z") + 1)
            if txt.lower().count(chr(i)) % 2 == 1
        )