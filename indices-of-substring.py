def indices_of_substring(text):
    target = input()
    return [i for i, substring in enumerate(text) if text[i:].startswith(target)]