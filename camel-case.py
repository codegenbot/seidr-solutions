```
def camel_case(s):
    result = ""
    for group in s.split("-"):
        if not result:
            result += group.capitalize()
        else:
            result += group.capitalize().capitalize()
    return result