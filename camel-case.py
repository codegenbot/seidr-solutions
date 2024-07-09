def camel_case(s):
    words = s.split("-")
    result = words[0].upper()
    for word in words[1:]:
        if len(words) > 2:
            result += word.capitalize()
        else:
            result += word
    return result