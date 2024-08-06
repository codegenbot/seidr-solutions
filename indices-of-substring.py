def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text[i:].index(input()) + i
                end = start + len(input())
                result.append(start)
                i = end
                if not text[i:].startswith(input()):
                    break
    return sorted(set(result))