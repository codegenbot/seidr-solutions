def indices_of_substring():
    text = input("Enter the main text: ")
    target = input("Enter the target string: ")
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        if pos > 0:  
            result.append(pos)
        pos += len(target)

    return result

print(indices_of_substring())