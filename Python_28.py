from typing import List


def concatenate(input_list: List[str]) -> str:
    strings = []
    while True:
        s = input("Enter a string (or 'stop' if finished): ")
        if s.lower() == "stop":
            break
        strings.append(s)
    return " ".join([s.strip() for s in strings])