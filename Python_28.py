from typing import List


def concatenate(*args: List[str]) -> List[str]:
    strings = []
    while True:
        s = input("Enter a string (or 'stop' if finished): ")
        if s.lower() == "stop":
            break
        strings.append(s)
    return [" ".join([s.strip() for s in args]), *strings]