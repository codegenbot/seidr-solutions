```
text = input("Enter the text: ")
target = input("Enter the target: ")

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            pos = text[i:].find(target)
            while True:
                result.append(i + pos)
                i += pos + 1
                pos = text[i:].find(target)
                if pos == -1:
                    break
    return result

print(indices_of_substring(text, target))