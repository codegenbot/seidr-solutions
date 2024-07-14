def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            j = i
            while True:
                if text[j:j+len(target)] != target:
                    break
                result.append(j)
                j += len(target)
        i += 1
    return result