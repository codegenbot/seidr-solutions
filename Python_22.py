from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]

if __name__ == "__main__":
    values = input("Enter comma-separated integers (e.g., 1, 2, 3): ").split(",")
    values = [int(x) for x in values]
    result = filter_integers(values)
    print(result)