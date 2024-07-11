def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)].startswith(target):
            pos = i
            while True:
                pos = text[pos:].find(target)
                if pos == -1:
                    break
                result.append(pos+i)
                pos += len(target)
    return result