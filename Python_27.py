def convert_case(string):
    return "".join([char.lower() if char.islower() else char.upper() for char in string])

def check(func):
    input_string = input("Enter a string: ")
    print(func(input_string))

check(convert_case)