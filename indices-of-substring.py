```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text.find(input(), i)
                if start == -1:
                    break
                result.append(start)
                i = start + 1
    return result