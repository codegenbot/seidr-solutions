def swap_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

input_string = input()
print(swap_case(input_string))  