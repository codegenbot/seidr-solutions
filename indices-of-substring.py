def indices_of_substring(text, target):
    matches = re.finditer(target, text, overlapped=True)
    return [match.start() for match in matches]