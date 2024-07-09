def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
            j = i
            while text[j: j+len(target)] == target:
                j += len(target)
    return result