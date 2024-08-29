```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                index = text.find(input(), start)
                if index == -1:
                    break
                result.append(index)
                start = index + 1
    return result