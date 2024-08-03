def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.append(i)
            while True:
                index = text[i:].index(input()) + i
                if text[index : index + len(input())] == input():
                    result.append(index)
                else:
                    break
    return result