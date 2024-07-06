from typing import List


def concatenate(str_params: List[str]) -> str:
    while True:
        s = input("Enter a string (or 'stop' if finished): ")
        if s.lower() == "stop":
            break
        str_params.append(s)
    return " ".join([s.strip() for s in str_params])