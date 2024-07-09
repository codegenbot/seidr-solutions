def indices_of_substring(text):
    indices = [
        i for i in range(len(text)) if text.startswith(text[i : i + len(text)], 0)
    ]
    return indices