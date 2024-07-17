def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i >= len(
            text[i : i + len(text)]
        ):  # check if there is enough string left
            if (
                text[i : i + len(text)].find(text) != -1
            ):  # check if the substring appears in the remaining string
                result.extend(
                    [j + i for j in range(len(text) - i) if text[i + j] == text]
                )
    return [str(i) for i in set(result)]