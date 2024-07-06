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
        print("The file does not exist.")
        return None
    except IOError:
        print("Error reading the file.")
        return None
    if longest_line is not None:
        print(f"The longest line in {input_file} is '{longest_line}'")
    else:
        print(f"No lines found in {input_file}.")