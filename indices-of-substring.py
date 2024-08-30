def indices_of_substring(text):
    target = input()
    indices = []
    for i in range(len(text)):
        pos = text[i:].find(target)
        if pos != -1:  
            indices.append(str(i + pos))
    return [int(x) for x in indices]