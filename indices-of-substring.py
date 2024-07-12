def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i:].startswith(target):
            indices.append(i)
            i += len(target)  # Increment i by the length of the target string
        else:
            i += 1

    return indices

output = indices_of_substring()
print(*output)