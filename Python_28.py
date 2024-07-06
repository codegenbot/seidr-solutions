from typing import List


def concatenate() -> List[str]:
    strings = []
    while True:
        s = input("Enter a string (or 'stop' if finished): ")
        if s.lower() == "stop":
            break
        strings.append(s)
    return [s.strip() for s in strings]