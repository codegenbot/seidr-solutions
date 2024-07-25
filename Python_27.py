def swap_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string]) 

def check(string):
    return swap_case(string)