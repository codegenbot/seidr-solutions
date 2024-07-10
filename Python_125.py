```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        counts = {}
        for i in range(ord('a'), ord('z')+1):
            count = txt.count(chr(i))
            if count % 2 != 0:
                return sum(1 for _ in range(count))