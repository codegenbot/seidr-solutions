def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.extend([i + j for j in range(len(input()))])
    return result