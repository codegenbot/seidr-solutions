def reverse_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

output = reverse_case("Your_Input_String_Here")
print(output)