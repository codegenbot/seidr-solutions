def strlen(filename: str) -> int:
    try:
        with open(filename, "r") as file:
            return len(file.read())
    except FileNotFoundError:
        return 0