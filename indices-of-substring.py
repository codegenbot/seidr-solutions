def indices_of_substring(text):
    target = input()
    result = []
    if text[:len(target)] == target:
        result.append(0)
    [result.append(i) for i in range(len(text)) if text[i:i+len(target)] == target]
    return str(result)