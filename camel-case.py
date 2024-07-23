def camel_case(s):
    result = ""
    for word in s.split("-"):
        if word:
            result += (word[0].upper() + word[1:].lower() if len(word) > 1 else word).capitalize()
    return result