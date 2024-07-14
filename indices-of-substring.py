def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            index = i
            while True:
                index = text[index+len(target):].find(target)
                if index == -1:
                    break
                result.append(index + i)
                index += len(target)
    return sorted(result)

text = input()
target = input()

print(indices_of_substring(text, target))