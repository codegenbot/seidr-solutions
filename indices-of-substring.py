def indices_of_substring(text):
    target = text.splitlines()[1].strip()
    result = [i for i in range(len(text)) if text.startswith(target, i)]
    return str(result)