def indices_of_substring(text):
    try:
        target = input()
    except:
        return []

    result = [i for i in range(len(text)) if text.startswith(target, i)]
    return result