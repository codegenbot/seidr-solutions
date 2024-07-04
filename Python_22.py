from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values separated by spaces: ")
    values = user_input.split()
    processed_values = [int(x) if x.isdigit() or (x.startswith('-') and x[1:].isdigit()) else x for x in values]
    print(filter_integers(processed_values))