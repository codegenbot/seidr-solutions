def indices_of_substring(text):
    target = input()
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return str(indices)