def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text.startswith(target):
            while True:
                index = text.find(target, i) + i
                result.append(index)
                if index == len(text) - 1 or not text[index + 1:].startswith(target):
                    break
                i = index
    return result