def indices_of_substring(text):
    target = input("Enter the target string: ")
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    return result

text = input("Enter the text string: ")
print(indices_of_substring(text))