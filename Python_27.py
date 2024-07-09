def flip_case(string: str) -> str:
    return ''.join(char.lower() if char.isupper() else char.upper() for char in string)