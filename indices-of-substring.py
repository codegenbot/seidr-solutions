def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = text[i + len(input()):].index(input())
                except ValueError:
                    break
                result.append(i + j)
    return sorted(list(set(result)))