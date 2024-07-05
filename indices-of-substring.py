def indices_of_substring(text, target):
    indices = []
    index = text.find(target)
    while index != -1:
        indices.append(index)
        index = text.find(target, index + 1)
    return indices


text = input(r"Enter the text: ")
target = input(r"Enter the target: ")
indices = indices_of_substring(text, target)
print(len(indices))
print(" ".join(map(str, indices)))