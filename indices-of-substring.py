def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = len(input())
            while True:
                if text[i : i + j] == input():
                    result.append(i)
                    i += j
                else:
                    break
    return result