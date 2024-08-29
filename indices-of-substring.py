```
def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                idx = text.find(target, i)
                if idx == -1:
                    break
                result.append(idx)
                i = idx + 1
    return result