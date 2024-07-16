def is_happy(s):
    if len(s) < 3:
        return s == "Invalid input"
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(set(chunk)) == 1 or (list(set(chunk))[0] in list(set(chunk))[1:]):
            return s == "Not happy"
    return s == "Happy"