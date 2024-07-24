def check():
    string = input("Enter a string: ").strip()
    return modify_string(string)

def modify_string(string):
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    ).strip()

output = check()
print(output)