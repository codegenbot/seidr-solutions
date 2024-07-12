def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i < len(text) + 1:
        if text[i:].startswith(target) or text[i:].endswith(target):
            indices.append(i)
        i += 1

    return indices

output = indices_of_substring()
print(*output)