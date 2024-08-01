def change_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

# Call the function with the required string input
result = change_case("YourInputStringHere")
print(result)