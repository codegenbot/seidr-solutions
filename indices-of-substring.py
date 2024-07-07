```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text[i:].find(input())
                if index == -1:
                    break
                else:
                    i += index
                    result.append(i)
    return result