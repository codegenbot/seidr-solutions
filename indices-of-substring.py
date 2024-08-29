def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                index = text.find(target, start)
                if index == -1:
                    break
                result.append(index)
                start = index + 1
    return result

text = input()
target = input()
print(indices_of_substring(text, target))