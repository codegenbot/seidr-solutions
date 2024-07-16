```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i <= len(text[i:].lstrip()):
            continue
        target = text[i:i+len(text.lstrip())].lstrip()
        if target == text.lstrip():
            result.append(i)
        else:
            if target == text.lstrip().rstrip():
                if text.startswith(target):
                    result.append(0)
                elif not text.rstrip().startswith(target[:-1]):
                    break
            for j in range(i, len(text)):
                if text[j:].lstrip().startswith(target):
                    result.extend(list(range(i, j+1)))
                    break
    return result