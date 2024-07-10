def swap_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

input_string = input("Enter a string: ")
result = swap_case(input_string)
print(result)