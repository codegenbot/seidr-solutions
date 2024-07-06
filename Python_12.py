from typing import Optional


def longest_file_line(input_file: str) -> Optional[str]:
    if not input_file:
        return None
    max_length = 0
    longest_line = None
    try:
        with open(input_file, "r") as f:
            for line in f:
                line = line.strip()
                if len(line) > max_length:
                    max_length = len(line)
                    longest_line = line
    except FileNotFoundError:
        return None
    except IOError:
        return None
    return longest_line if longest_line else ""