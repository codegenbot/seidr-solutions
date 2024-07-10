def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = i + input().strip()
                    result.append(j)
                    i += len(input())
                except ValueError:
                    break
    return result