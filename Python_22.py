from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    values = [eval(value) for value in input().split()]
    filtered_values = filter_integers(values)
    print(filtered_values)