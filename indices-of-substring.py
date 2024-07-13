def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    start = 0
    index = text.find(target, start)
    while index != -1:
        indices.append(index)
        start = index + 1
        index = text.find(target, start)

    print(len(indices))

indices_of_substring()