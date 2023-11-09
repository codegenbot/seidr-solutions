

def strlen(string: str) -> int:
    if string == "":
        return 0
    return 1 + strlen(string[1:])
