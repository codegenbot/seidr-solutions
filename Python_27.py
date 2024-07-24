def check():
    string = input("Enter a string consisting of alphabets only: ").strip()
    return modify_string(string)


def modify_string(string):
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )


output = check()
print(output)