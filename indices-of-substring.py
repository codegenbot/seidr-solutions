def indices_of_substring():
    text = input()
    target = input()

    indices = []
    index = 0
    while index < len(text):
        if text[index : index + len(target)] == target:
            indices.append(index)
            index += 1
        else:
            index += 1

    for i in indices:
        print(i, end=" ")


indices_of_substring()