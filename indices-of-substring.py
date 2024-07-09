def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            start = pos
            while start != -1:
                result.append(start)
                start = text.find(target, start + 1)