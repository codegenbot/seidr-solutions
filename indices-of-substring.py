def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [i for i in range(-1, len(text) - len(target) + 1) if text.find(target, i+1) == i+1]
    for index in indices:
        print(index)


indices_of_substring()