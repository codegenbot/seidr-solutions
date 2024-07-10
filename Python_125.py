```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        count_dict = {}
        for char in txt:
            if char in count_dict:
                count_dict[char] += 1
            else:
                count_dict[char] = 1
        return len(count_dict)