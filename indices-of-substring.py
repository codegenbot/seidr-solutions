def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i < len(text):
        index = text.find(target, i)
        if index == -1:
            break
        indices.append(index)
        i = index + 1

    for index in indices:
        print(index)

indices_of_substring()