def indices_of_substring(text):
    return [i for i in range(len(text)) if text[i:].startswith(input())]