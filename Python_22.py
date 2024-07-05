from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values separated by spaces: ")
    values = user_input.split()
    converted_values = [int(v) if v.isdigit() else v for v in values]
    result = filter_integers(converted_values)
    print(result)