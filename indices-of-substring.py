def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = []
    i = 0
    while True:
        i = text.find(target, i)
        if i == -1:
            break
        result.append(i)
        i += len(target)
    return sorted(result)

print(indices_of_substring())