```
def indices_of_substring(text):
    result = []
    i = 0
    while True:
        try:
            j = text.index(input(), i)
            result.append(j)
            i = j + 1
        except ValueError:
            break
    return result