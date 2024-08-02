def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

# Test the function with user input
input_string = input()
output = swap_case(input_string)
print(output)