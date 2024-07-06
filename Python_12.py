def longest_file_line(input_file: str) -> Optional[str]:
    if not input_file:
        return None
    if " " in input_file or any(not c.isprintable for c in input_file):
        return None
    max_length = 0
    longest_line = None
    with open(input_file, "r") as f:
        for line in f:
            if len(line.strip()) > max_length:
                max_length = len(line.strip())
                longest_line = line.strip()
    return longest_line if longest_line is not None else ""