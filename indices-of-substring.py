def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text[i:].index(input()) + i
                end = start + len(input())
                if start != 0 and not text[start - 1].isalnum():
                    break
                result.append(start)
                i = end
    return result