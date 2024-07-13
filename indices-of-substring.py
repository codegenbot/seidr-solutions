```
def indices_of_substring(text):
    target = input()
    if target not in text:
        return "0"
    result = [i for i in range(len(text)) if text[i:i+len(target)] == target]
    return str(result)