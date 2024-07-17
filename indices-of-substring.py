def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                position = text[i:].find(input())
                if position == -1:
                    break
                result.append(i + position)
                i += position + 1
    return sorted(set(result))