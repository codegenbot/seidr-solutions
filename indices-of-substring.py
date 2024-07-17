```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = text.index(input(), i)
                    result.append(j)
                    i = j
                except ValueError:
                    break
    return result