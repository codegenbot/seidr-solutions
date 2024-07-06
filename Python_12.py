def longest_file_line() -> Optional[str]:
    input_file = input("Enter a file name: ")
    if not input_file:
        return None
    max_length = 0
    longest_line = None
    try:
        with open(input_file, "r") as f:
            for line in f:
                if len(line.strip()) > max_length:
                    max_length = len(line.strip())
                    longest_line = line.strip()
    except FileNotFoundError:
        return None
    except IOError:
        return None
    return longest_line if longest_line is not None else ""