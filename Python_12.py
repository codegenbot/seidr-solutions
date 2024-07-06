from typing import Optional


def longest_file_line(input_file: str) -> Optional[str]:
    max_length = 0
    longest_line = None

    print("Enter the path to the file:")
    input_file = input()

    if not input_file:
        return None

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