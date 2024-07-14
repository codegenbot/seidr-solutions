def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if input() == text[i:]:
            result.extend([i + j for j in range(len(input()))])
    return result