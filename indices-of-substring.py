def indices_of_substring(text):
    try:
        target = text.split("\n")[1].strip()
        indices = [
            i
            for i in range(len(text))
            if text[i : i + len(target)].lower() == target.lower()
        ]
        return str(indices)
    except IndexError:
        return "0"