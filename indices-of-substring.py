def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    start = 0
    while start <= len(text) - len(target):
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1

    print(len(indices))

indices_of_substring()