def indices_of_substring(text, target):
    result = [m.start() for m in re.finditer(target, text)]
    return result