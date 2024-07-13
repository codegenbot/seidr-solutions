def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target]
    
    return indices

result = indices_of_substring()
print(result)