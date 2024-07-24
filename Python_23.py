def file_length(filename: str) -> int:
    try:
        with open(filename, 'r') as f:
            length = len(f.read())
            return length
    except FileNotFoundError:
        return 0