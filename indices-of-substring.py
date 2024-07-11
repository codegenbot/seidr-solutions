def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
            j = i + 1
            while j < len(text) and text[j:j+len(target)] == target:
                result.append(j)
                j += 1
    return result