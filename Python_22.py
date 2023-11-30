from typing import List, Union


def filter_integers(values: List[Union[str, int]]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    values = list(map(int, input().split()))
    filtered_values = filter_integers(values)
    print(filtered_values)