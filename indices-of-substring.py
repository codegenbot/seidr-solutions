```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start_index = text[i:].find(input())+i
                if start_index == -1 or start_index + len(input()) > len(text):
                    break
                result.append(start_index)
                i = start_index + len(input())
    return sorted(result)