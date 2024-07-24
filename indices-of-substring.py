```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = len(input())
            while i + j <= len(text) and text[i:i+j] == input():
                result.append(i)
                i += j
    return result