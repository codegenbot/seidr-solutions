from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    values = [1, 2, 'hello', 3, 'world', 4, '5']
    filtered_values = filter_integers(values)
    print(filtered_values)