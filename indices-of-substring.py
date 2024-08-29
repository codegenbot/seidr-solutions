def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = i
            while True:
                try:
                    j = text[j + len(input())].index(input())
                except ValueError:
                    break
                result.append(i + j)
    return sorted(result)