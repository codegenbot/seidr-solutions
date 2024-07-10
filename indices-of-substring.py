def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i <= len(text[i:].lstrip()):
            continue
        for j in range(i + 1, len(text) + 1):
            if text[i:j].lower() == input().lower():
                result.append(str(i))
                break
    return result if result else ["0"]