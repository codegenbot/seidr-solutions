def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        if target == text[i:]:
            result.extend([i])
    return result