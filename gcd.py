def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos != -1:
            indices.append(pos)
            while index + len(target) <= len(text) and text[index:index+len(target)] == target:
                index += len(target)
            else:
                break
        else:
            break
    return indices

text = input()
target = input()

print(find_indices(text, target))