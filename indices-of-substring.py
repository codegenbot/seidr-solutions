def indices_of_substring():
    text = input()
    target = input()
    result = [i for i in range(len(text)) if text.startswith(target, i)]
    return sorted(result)