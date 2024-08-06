```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = text.index(input(), i)
                except ValueError:
                    break
                result.append(j)
                i = j + 1
    return result