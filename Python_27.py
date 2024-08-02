def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

# Call the function with required input
output = swap_case("Hello World!")
print(output)