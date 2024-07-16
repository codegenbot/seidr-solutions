def is_happy(s):
    if len(s) < 3:
        return "Invalid input"
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(set(chunk)) == 1 or (list(set(chunk))[0] in list(set(chunk))[1:]):
            return "Not happy"
    return "Happy"