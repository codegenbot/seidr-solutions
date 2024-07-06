from typing import List, Any


def filter_integers() -> List[int]:
    values = []
    while True:
        try:
            value = int(input("Enter a number (or 'stop' to finish): "))
            if value == -1:  
                break
            values.append(value)
        except ValueError:
            pass
    return [value for value in values]