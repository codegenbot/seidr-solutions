```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text.startswith(input(), i):
            j = text.index(input())
            while True:
                try:
                    result.append(j)
                    j = text.index(input(), j + len(input()))
                except ValueError:
                    break
    return result