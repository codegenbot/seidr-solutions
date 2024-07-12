def indices_of_substring(text):
    target = input()
    result = [i for i in range(len(text)) if text[i:i+len(target)].lower() == target.lower()]
    return str(result)