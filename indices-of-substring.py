def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.append(str(i))
    return result + [str(x) for x in list(map(int, input().split(",")))]