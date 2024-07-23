from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values (separated by spaces): ")
    values = [x.strip() for x in user_input.split()]
    result = filter_integers([values])
    print(result)