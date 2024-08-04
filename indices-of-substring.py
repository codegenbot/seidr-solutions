```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                start_index = text.find(input(), start_index)
                if start_index == -1:
                    break
                result.append(start_index)
                start_index += 1
    return result