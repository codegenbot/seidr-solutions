def check(string):
    return modify_string(string)

def modify_string(string):
    return "".join(
        [char.upper() if char.islower() else char.lower() for char in string]
    )

flip_case = input("Enter a string: ").strip()
output = check(flip_case)
print(output)