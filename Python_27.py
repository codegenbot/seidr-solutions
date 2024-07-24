def check():
    flip_case = input("Enter a string: ")
    return modify_string(flip_case)

def modify_string(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

output = check()
print(output)