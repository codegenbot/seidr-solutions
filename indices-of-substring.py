```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                position = text.find(input(), start)
                if position == -1: break
                result.append(position)
                start = position + 1
    return result