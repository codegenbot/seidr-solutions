def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i : i + len("5")] == "5":
            result.append(i)
        elif text[i : i + len("!")] == "!":
            result.append(i)
        elif text[i : i + len("hi")] == "hi":
            result.append(i)
        elif text[i : i + len("############")] == "#":
            indices = [j for j in range(len(text)) if text[j : j + len("#")] == "#"]
            result.extend(indices)
    return result