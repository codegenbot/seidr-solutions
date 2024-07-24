def indices_of_substring():
    text = input()
    target = input()
    return [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)].lower() == target.lower()]