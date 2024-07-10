def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [i for i in range(len(text)) if all(text[i+j] == target[j] for j in range(len(target))]
    for idx in indices:
        print(idx)

indices_of_substring()