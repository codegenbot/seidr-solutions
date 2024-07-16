def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = i
        while pos + len(target) <= len(text) and text[pos:pos+len(target)].lower() == target.lower():
            result.append(pos)
            pos += 1
    return result