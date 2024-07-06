def indices_of_substring(text, target):
    pattern = re.compile(target)
    return [m.start() for m in pattern.finditer(text)]