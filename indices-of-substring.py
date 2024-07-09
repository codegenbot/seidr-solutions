```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    start = text.index(input(), i)
                    result.append(start)
                    i = start
                except ValueError:
                    break
    return result