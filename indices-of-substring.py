def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = -1
    while i + len(target) <= len(text) + 1:
        i += 1
        if text[i:i+len(target)] == target:
            indices.append(i)

    return indices

output = indices_of_substring()
print(*output)