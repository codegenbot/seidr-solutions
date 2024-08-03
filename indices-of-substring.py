def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    
    current_index = 0
    while True:
        current_index = text.find(target, current_index)
        if current_index == -1:
            break
        indices.append(current_index)
        current_index += 1

    for index in sorted(indices):
        print(index)


indices_of_substring()