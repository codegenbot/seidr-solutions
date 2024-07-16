def indices_of_substring(text): 
    target = input()
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(str(i))
    return [int(x) for x in indices]