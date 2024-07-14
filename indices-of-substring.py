def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start += pos + 1
    return result

text = input("Enter the main string: ")
target = input("Enter the target string: ")

print(indices_of_substring(text, target))