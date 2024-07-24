def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text) - len(target) + 1) if text.find(target, i, i + len(target)) == i]

    return indices

print(indices_of_substring())