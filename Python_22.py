from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    raw_input = input("Enter values separated by spaces: ")
    values = [eval(v) for v in raw_input.split()]
    print(filter_integers(values))