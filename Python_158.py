```
def find_max(words):
    max_length = 0
    result = ""
    for word in words:
        length = len(set(word))
        if length > max_length or (length == max_length and word < result):
            max_length = length
            result = word
    return result