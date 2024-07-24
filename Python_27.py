def reverse_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

# Call the function with the desired string
output = reverse_case(input())
print(output)