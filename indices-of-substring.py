def indices_of_substring(text, target):
    result = []
    i = -1
    while True: 
        i = text.find(target, i + 1)
        if i == -1: 
            break
        result.append(i)