def split_words(txt):
    words = txt.split()
    if any(char in words[0] for char in ",.!"):
        return [words[0]]
    else:
        odd_count = 0
        for i in range(ord('a'), ord('z')+1):
            if chr(i).lower() in txt.lower():
                odd_count += 1
        return odd_count