```
from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values (space separated): ")
    input_values = [x.strip() for x in user_input.split(',')]
    filtered_values = filter_integers(input_values)
    print(filtered_values)