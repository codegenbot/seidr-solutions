from typing import Optional


def longest_file_line(input_file: str) -> Optional[str]:
    if not input_file:
        return None
    max_length = 0
    longest_line = None
    with open(input_file, "r") as f:
        for line in f:
            stripped_line = line.strip()
            if len(stripped_line) > max_length and stripped_line:
                max_length = len(stripped_line)
                longest_line = stripped_line
    return longest_line