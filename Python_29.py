from typing import List

def filter_by_prefix() -> List[str]:
    input_num = input().strip()
    if not input_num.isdigit():
        raise ValueError("Invalid input: expected an integer")

    n = int(input_num)
    strings = []
    for _ in range(n):
        string = input().strip()
        strings.append(string)

    prefix = input().strip()

    return [s for s in strings if s.startswith(prefix)]