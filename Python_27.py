def flip_case(string: str) -> str:
    return "".join(char.upper() if char.islower() else char.lower() for char in string)