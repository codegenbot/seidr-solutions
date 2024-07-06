def indices_of_substring(text, target):
    regex = re.compile(target)
    result = []
    for match in regex.finditer(text):
        result.append((match.start(), match.end()))
    return result