def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i:].startswith(target):
            indices.append(i)
            i += len(target)
        else:
            i += 1

    return indices

output = indices_of_substring()
for index in output:
    print(index)