"""
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        while pos != -1:
            result.append(pos)
            i = pos + 1
            pos = text.find(target, i)
    return result
"""