```
def camel_case(s):
    result = ""
    for word in s.split("-"):
        if not result:
            result += word.capitalize()
        else:
            result += word[0].upper() + word[1:].lower()
    return result


print(camel_case(input()))