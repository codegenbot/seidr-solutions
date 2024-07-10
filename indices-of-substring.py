Here is the solution:

def indices_of_substring(text, target):
    result = []
    i = 0
    while i <= len(text) - len(target):
        pos = text.find(target)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    return result