def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

def check():
    print(swap_case('Hello World'))

check()