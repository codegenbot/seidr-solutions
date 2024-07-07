```
def indices_of_substring():
    text = input()
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                start = text[i:].find(target) + i
                if start == -1:
                    break
                result.append(start)
                i = start
    return sorted(result)