```
def indices_of_substring():
    text = input()
    target = input()
    result = []
    i = 0
    while True:
        i = text.find(target, i)
        if i == -1:
            break
        result.append(i)
        i += 1
    return result

indices_of_substring()