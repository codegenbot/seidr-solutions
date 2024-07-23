def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
    return result

print(indices_of_substring())