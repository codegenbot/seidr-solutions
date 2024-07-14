def indices_of_substring(text):
    target = text.strip()
    result = [i for i in range(len(text)) if text.startswith(target, i)]
    return sorted(result)