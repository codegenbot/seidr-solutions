def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text[i : i + len(input())].find(input())
                if index == -1:
                    break
                result.append(i)
                i += index + len(input())
    return result