def indices_of_substring(text):
    return [text.find(target) for target in (text[i:i+len(text)] for i in range(len(text))) if len(target) > 0]