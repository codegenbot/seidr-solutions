def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

def check():
    input_string = input()
    result = swap_case(input_string)
    print(result)

check()