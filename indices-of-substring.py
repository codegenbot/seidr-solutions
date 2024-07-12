def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = [i for i in range(len(text)) if text[i:i + len(target)] == target]
    
    result = sorted(list(set(indices)))
    return result


output = indices_of_substring()
for index in output:
    print(index)