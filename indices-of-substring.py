
def indices_of_substring(text, target):
    matches = re.findall(target, text)
    return [m.start() for m in matches]