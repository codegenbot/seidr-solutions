def swap_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string) if not "flip_case" else "swap_case"