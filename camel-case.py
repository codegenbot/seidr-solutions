def to_camel_case(text):
    if "-" not in text and " " not in text:
        return text
    text = text.replace("-", " ").replace(" ", "")
    result = text.capitalize()
    for i in range(1, len(result)):
        result = result[:i] + result[i].upper() + result[i + 1 :]
    return result