def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = i
            while True:
                index = text[j:].find(target)
                if index == -1:
                    break
                result.append(str(i + index))
                j += index + 1
    return [int(x) for x in result]