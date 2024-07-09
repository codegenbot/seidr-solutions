def swap_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

def check(input_string):
    return swap_case(input_string.replace('flip_case', 'swap_case'))