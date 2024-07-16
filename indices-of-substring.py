```
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = i
        while pos <= len(text) - len(target):
            if text[pos:pos+len(target)].lower() == target.lower():
                result.append(pos)
            pos += 1
    return result