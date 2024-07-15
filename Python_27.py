def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

def check(s):
    return swap_case(s)

# Sample function call to check
# print(check("Hello World"))