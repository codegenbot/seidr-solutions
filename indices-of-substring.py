def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            j = i
            while j <= len(text)-len(target):
                if text[j:j+len(target)] != target:
                    break
                result.append(j)
                j += 1
    return result