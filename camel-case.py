def camel_case(s):
    result = ""
    for word in s.split():
        if word:
            result += word.capitalize() + " "
    return result.strip()