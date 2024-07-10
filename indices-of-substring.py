```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while text[i:].startswith(input()):
                j = i + len(input())
                if j > len(text) - 1:
                    break
                i = j
            result.append(i)
    return result