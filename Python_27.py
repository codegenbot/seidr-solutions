def swap_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

# Call the function with the desired string as an argument
print(swap_case("Hello, World!"))