from typing import Optional

def longest_file_line(file_content: str) -> Optional[str]:
    if not file_content:
        return None
    max_length = 0
    longest_line = None
    lines = file_content.split('\n')
    for line in lines:
        if len(line.strip()) > max_length:
            max_length = len(line.strip())
            longest_line = line.strip()
    return longest_line if longest_line is not None else ""