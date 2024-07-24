def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)  # Original code

def check(string):
    return swap_case(string)  # Modification done here, replaced flip_case with swap_case in the function call
print(check("Hello, World!"))