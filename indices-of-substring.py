def indices_of_substring(text, target):
    pattern = r"(?=(%s))" % re.escape(target)
    matches = [match.start() for match in re.finditer(pattern, text)]
    return matches