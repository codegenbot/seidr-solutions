def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text[i:].index(input()) + i
                end = start + len(input())
                result.append(start)
                if end >= len(text) or text[end:] != input():
                    break
                i = end
    return list(set(result))