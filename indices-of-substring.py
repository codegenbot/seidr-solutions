def indices_of_substring():
    text = input()
    target = input()

    idx = 0
    while idx < len(text):
        idx = text.find(target, idx)
        if idx == -1:
            break
        print(idx)
        idx += 1


indices_of_substring()