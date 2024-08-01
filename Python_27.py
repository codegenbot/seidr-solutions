def invert_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

# Call the function
invert_case("Python/27")