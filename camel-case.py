def camel_case(s):
    result = ""
    for word in s.split("-"):
        if not result:
            result = word.lower()
        else:
            result += word.capitalize()
    return result

print(camel_case(input()))