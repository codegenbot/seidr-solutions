def indices_of_substring(text):
    target = input()
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += len(target)

print(indices_of_substring(input()))