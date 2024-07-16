def is_happy(s):
    if len(s) < 3:
        return "Invalid input"
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(set(chunk)) <= 1 or any(c1 == c2 for c1, c2 in zip(set(chunk), set(chunk)[1:])):
            return "Not happy"
    return "Happy"