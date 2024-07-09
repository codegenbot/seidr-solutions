```
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)-len(target)+1):
        if text[i:i+len(target)] == target:
            result.append(i+1)
            for j in range(i+len(target), len(text)):
                if text[j:j+len(target)] == target:
                    result.append(j+1)
    return result