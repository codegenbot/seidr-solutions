Here is the completed code:

```
def indices_of_substring(text):
    result = [0]
    for i in range(1, len(text)):
        if text[i:] == '':
            return result
        if text[i:i+len(result[-1])] == result[-1]:
            continue
        for j in range(i+1, len(text)+1):
            substring = text[i:j]
            if substring == result[-1]:
                result.append(j-1)
                break
    return result