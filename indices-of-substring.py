```
def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            while True:
                start_index = text.find(target, start_index)
                if start_index == -1:
                    break
                result.append(start_index)
                start_index += 1
    return sorted(result)