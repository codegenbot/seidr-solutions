def indices_of_substring(text, target):
    indices = []
    start = 0

    while start < len(text):
        pos = text.find(target, start)

        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break

    return indices


text = input()
target_length = int(input())
print(indices_of_substring(text, text[:target_length]))