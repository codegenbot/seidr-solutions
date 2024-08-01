def change_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

result = change_case(input())
print(result)