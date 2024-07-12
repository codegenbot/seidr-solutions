def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
        elif i >= len(target) and text[i-len(target)+1:i+1] == target:
            result.append(i-len(target)+1)
    return list(set(result))