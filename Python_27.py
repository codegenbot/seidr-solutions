def check():
    string = raw_input("Enter a string containing both upper and lower case letters: ").strip()
    return modify_string(string)

def modify_string(string):
    string = string.strip()
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )

output = check()
print(output)