def indices_of_substring(text):
    target = input().lower()
    indices = []
    for i in range(len(text)):
        if text[i:].lower().startswith(target):
            indices.append(str(i))
    return [int(index) for index in indices]