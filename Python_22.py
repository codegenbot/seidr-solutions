from typing import List, Any
from ast import literal_eval

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

if __name__ == "__main__":
    input_str = input("Enter values: ")
    values = [literal_eval(value) if isinstance(literal_eval(value), int) else value for value in input_str.split()]
    filtered_values = filter_integers(values)
    print(filtered_values)