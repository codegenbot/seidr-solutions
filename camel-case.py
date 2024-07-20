print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    result = ""
    for group in s.replace("-", " ").split():
        if result:
            result += group.capitalize()
        else:
            result += group
    return result

print(camel_case(s))