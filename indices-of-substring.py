def indices_of_substring(text, target):
    result = [0]
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i : i + len(target)] == target:
            i += 1
        else:
            i = i + 1
    for j in range(len(text) - len(target) + 1):
        if text[j : j + len(target)] == target:
            result.append(j)
    return sorted(set(result))