```
def indices_of_substring(text):
    return [i for i, char in enumerate(text) if text[i:].find(input()) != -1]