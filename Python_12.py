```
from typing import Optional


def longest_file_line(input_file: str) -> Optional[str]:
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
        print("File not found.")
        return None
    except IOError:
        print("Error reading file. Please check permissions.")
        return None
    if longest_line is None:
        return "File is empty."
    else:
        return longest_line

print(longest_file_line("path_to_your_file.txt"))