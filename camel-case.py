```
print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    result = ""
    for word in s.replace("-", " ").split():
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return result

print(camel_case(s))