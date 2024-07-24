```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                end_index = start_index + len(input())
                result.append(start_index)
                if end_index >= len(text):
                    break
                start_index += 1
    return result