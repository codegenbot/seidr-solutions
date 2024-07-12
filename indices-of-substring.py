def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or (len(target) > 1 and text[i:i + len(target) - 1] == target[:len(target) - 1])]

    for index in indices:
        print(index)


indices_of_substring()