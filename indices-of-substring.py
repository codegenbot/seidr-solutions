def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        target = input()
        if text[i:i+len(target)] == target:
            result.append(i)
    return result