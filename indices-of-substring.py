def indices_of_substring(text, target):
    result = []
    for i, char in enumerate(text):
        pos = i
        while pos < len(text) and text[pos:pos+len(target)].lower() == target.lower():
            result.append(pos)
            pos += len(target)
    return result