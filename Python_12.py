from typing import Optional
import os.path


def longest_file_line(input_file: str) -> Optional[str]:
    if not input_file:
        return None

    max_length = 0
    longest_line = None

    file_extension = os.path.splitext(input_file)[1].lower()
    if file_extension not in (".txt", ".log"):
        return "Invalid file type. Please provide a text file."

    try:
        with open(input_file, "r") as f:
            for line in f:
                line_str = line.strip()
                if len(line_str) > max_length:
                    max_length = len(line_str)
                    longest_line = line_str
    except FileNotFoundError:
        return None
    except IOError:
        return None

    return longest_line if longest_line is not None else ""