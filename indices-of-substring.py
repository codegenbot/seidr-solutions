def indices_of_substring(text):
    try:
        target = text.split("\n")[1].strip()
        result = [i for i in range(len(text)) if text.startswith(target, i)]
        return str(result[0]) if len(result) == 1 else str(result)
    except IndexError:
        return "0"