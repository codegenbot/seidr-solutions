def indices_of_substring(text):
    result = []
    start = 0
    while True:
        pos = text.find(text[start:], 0)
        if pos == -1:
            break
        result.append(start + pos)
        start += pos + 1
    return result


text = input()
print(indices_of_substring(text))