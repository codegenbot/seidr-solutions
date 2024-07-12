def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                try:
                    start = text.index(target, i)
                    result.append(start)
                    i = start
                except ValueError:
                    break
    return result