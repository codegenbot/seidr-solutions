def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text.find(input(), i)
                if start == -1:
                    break
                end = start + len(input())
                result.append(start)
                i = end
    return result