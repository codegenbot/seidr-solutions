def camel_case(s):
    s = s.replace("-", " ").split()
    result = s[0].lower()
    for word in s[1:]:
        result += word.capitalize()
    return result

print(camel_case(input()))