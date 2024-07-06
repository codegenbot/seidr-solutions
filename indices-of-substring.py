def indices_of_substring(text, target):
    pattern = r"(?=(%s))(\1)" % re.escape(target)
    return [match.start() for match in re.finditer(pattern, text)]