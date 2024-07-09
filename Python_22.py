```
from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    try:
        user_input = input("Enter a list of values (space-separated): ")
        values = [item.strip() for item in user_input.split()]
        filtered_integers = filter_integers([eval(item) for item in values])
        print(filtered_integers)
    except Exception as e:
        print(f"An error occurred: {str(e)}")