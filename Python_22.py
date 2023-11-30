from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    values = []
    while True:
        try:
            value = int(input())
            values.append(value)
        except EOFError:
            break

    filtered_values = filter_integers(values)
    print(filtered_values)