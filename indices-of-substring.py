def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = i
            while j < len(text) and text[j:].startswith(input()):
                j += len(input())
            result.append(i)
    return result