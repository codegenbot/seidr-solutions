def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

# Sample function call
result = swap_case("Hello, World!")
print(result)