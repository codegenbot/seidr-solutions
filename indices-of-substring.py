def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or i + len(target) < len(text) and text[i:i + len(target) + 1] == target]
    
    result = sorted(list(set(indices)))
    return result

output = indices_of_substring()
for index in output:
    print(index)