def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = len(input()) - 1
            while j < len(text) and text[j] == text[i + j]:
                j += 1
            result.append(i)
            i += j
    return result