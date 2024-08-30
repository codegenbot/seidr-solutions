```
def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:i+len(str(target))] == str(target):
            result.append(i)
    return result