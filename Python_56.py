def checkio(text: str) -> list:
    result = []
    i = 0
    while i < len(text):
        if text[i].isdigit():
            j = i + 1
            while j < len(text) and text[j].isdigit():
                j += 1
            result.append(int(text[i:j]))
            i = j
        else:
            i += 1
    return result