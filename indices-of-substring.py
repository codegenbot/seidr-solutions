def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i:i + len(target)] == target:
            indices.append(i)
            i += 1
        else:
            i += 1
            
    for index in indices:
        print(index)


indices_of_substring()