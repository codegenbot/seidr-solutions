```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                if text[start:start+len(input())] == input():
                    result.append(start)
                    start += len(input())
                else:
                    break
    return result