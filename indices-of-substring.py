def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                pos = text[i : i + len(input())].index(input())
                result.append(i)
                i += len(input())
                if i >= len(text):
                    break
    return sorted(set(result))