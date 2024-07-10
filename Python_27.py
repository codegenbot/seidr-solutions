def convert_case(string):
    return "".join([char.lower() if char.islower() else char.upper() for char in string])