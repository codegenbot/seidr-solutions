def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i:].startswith(target):
            indices.append(i)
            i += 1  # Increment i by 1 to check for overlapping occurrences
        else:
            i += 1

    return indices

output = indices_of_substring()
print(*output)