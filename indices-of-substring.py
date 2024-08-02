```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = i + 1
                    while j < len(text) and text[j].endswith(input()):
                        j += 1
                    result.append(i)
                    i = j
                except ValueError:
                    break
    return result