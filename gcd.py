```
def find_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                start += len(target)
                if not text[start:].startswith(target):
                    break
            indices.append(start - len(target))
    return indices

text = input("Enter the text: ")
target = input("Enter the target string: ")

print(find_indices(text, target))