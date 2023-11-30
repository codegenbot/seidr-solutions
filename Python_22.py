from typing import List, Any
from ast import literal_eval


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    values = literal_eval(input())
    filtered_values = filter_integers(values)
    print(filtered_values)