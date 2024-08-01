def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = text[i : i + int(input())].index(input())
                    result.append(i + j)
                    i += int(input())
                except ValueError:
                    break
    return sorted(list(set(result)))