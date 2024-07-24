def camel_case(s):
    result = ""
    for word in s.split():
        if not result or "-" not in word:
            result += word.capitalize()
        else:
            result += word[0].upper() + word[1:].lower()
    return result


s = input()
print(camel_case(s))