def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    i = 0

    while i < len(text)-len(target)+1:
        if text[i:i+len(target)] == target:
            indices.append(i)
            i += len(target)  # Move to the next possible index
        else:
            i += 1  # Move to the next character

    print(indices)

indices_of_substring()