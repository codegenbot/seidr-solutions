def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                start = text.find(input(), start)
                if start == -1:
                    break
                result.append(start)
                start += len(input())
    return result