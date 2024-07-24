def check():
    string = input("Enter a string: ").strip()
    if not string:
        return "Input string is empty"
    return modify_string(string)

def modify_string(string):
    if not string:
        return "Input string is empty"
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    ).strip()

output = check()
print(output)