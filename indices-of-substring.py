def indices_of_substring(text, target):
    # Pattern matching to find all occurrences of the target in the text
    pattern = r"(?=(%s))" % re.escape(target)
    matches = [match.start() for match in re.finditer(pattern, text)]

    # Return a list of indices at which the target appears in the text
    return matches