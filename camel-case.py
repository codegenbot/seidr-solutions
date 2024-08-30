```
def camel_case(s):
    result = ""
    temp = ""
    for char in s:
        if char == "-":
            result += temp.capitalize() + " "
            temp = ""
        else:
            temp += char
    return result + temp.capitalize()

print(camel_case(input()))