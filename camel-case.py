def camel_case(s):
    result = ""
    for word in s.split():
        if len(word) > 1:
            result += word[0].upper()
            result += word[1:].lower()
        else:
            result += word
    return result