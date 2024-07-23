```Python
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

def main():
    user_input = input("Enter some values (separated by space): ")
    try:
        values = [int(value) for value in user_input.split()]
        filtered_values = filter_integers(values)
        print(filtered_values)
    except ValueError:
        print("Invalid input. Please enter integers only.")

if __name__ == "__main__":
    main()