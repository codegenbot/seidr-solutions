def indices_of_substring():
    text = input()
    result = []
    while True:
        target = input()
        i = 0
        while True:
            i = text.find(target, i)
            if i == -1:
                break
            result.append(i)
            i += len(target) + 1
        print(sorted(result))