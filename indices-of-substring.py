text = input("Enter the text string: ")
target = input("Enter the target string: ")
indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target]

if text.find(target) != -1:
    indices.append(text.find(target))
    while text.find(target, indices[-1] + 1) != -1:
        indices.append(text.find(target, indices[-1] + 1))

print(indices)