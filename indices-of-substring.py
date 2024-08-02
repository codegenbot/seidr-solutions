def indices_of_substring(text):
    target = input()
    result = [i for i in range(len(text)) if text.startswith(target, i)]
    return str(result[0]) if len(result) == 1 else str(result)