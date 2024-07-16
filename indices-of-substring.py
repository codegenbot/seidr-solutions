def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        if text[pos:pos+len(target)].lower() == target.lower():
            result.append(pos)
            pos += len(target)
        else:
            pos += 1
    return result