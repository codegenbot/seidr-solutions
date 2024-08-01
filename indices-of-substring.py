def indices_of_substring(text):
    return [
        i
        for i in range(len(text))
        if text.startswith(
            text[i : i + len(text)].split()[0],
            len(text[i : i + len(text)].split()[0]) - len(text.split()[0]) + 1,
        )
    ]