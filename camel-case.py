def camel_case(s):
    result = ""
    for word in s.split():
        if not result or not word.startswith("-"):
            result += word.capitalize()
        else:
            result += word[1:].capitalize() + " "
    return result.strip()