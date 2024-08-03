```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                result.append(start)
                if text[i+start+len(input()):] != input():
                    break
                start += len(input())
    return result