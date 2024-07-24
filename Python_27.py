def modify_string(string):
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )

def check(string):
    return modify_string(string)

flip_case = input("Enter a string: ").strip()
output = check(flip_case)
print(output)