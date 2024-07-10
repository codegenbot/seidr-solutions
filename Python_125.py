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
        return sum(1 for count in count_dict.values() if count % 2 != 0)