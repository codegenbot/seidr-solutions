```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                if not text[i:].startswith(input()):
                    break
                i += len(input())
            result.append(start_index)
    return result