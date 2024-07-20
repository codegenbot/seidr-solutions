print("Please enter a string in kebab-case: ")
s = input()


def camel_case(s):
    result = ""
    for word in s.replace("-", " ").split():
        if result:
            result += word.capitalize()
        else:
            result += word.lower()
    return result


print(camel_case(s))