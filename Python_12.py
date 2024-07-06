from typing import Optional


def longest_file_line(input_file: str) -> Optional[str]:
    if not input_file:
        return None

    max_length = 0
    longest_line = None

    if not input_file.lower().endswith((".txt", ".log")):
        return "Invalid file type. Please provide a text file."

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

input_file = input("Please enter the file name: ")
result = longest_file_line(input_file)
print(result)