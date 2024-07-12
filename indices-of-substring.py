def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i <= len(text) - len(target) + 1:
        if text[i:].startswith(target):
            indices.append(i)
        i += 1

    result = sorted(list(set(indices)))
    return result

output = indices_of_substring()
for index in output:
    print(index)