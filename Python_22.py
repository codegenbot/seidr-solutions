```Python
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    filtered_values = [value for value in values if isinstance(value, int)]
    return filtered_values

def main():
    values = []
    while True:
        user_input = input("Enter a value (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        try:
            values.append(int(user_input))
        except ValueError:
            print("Invalid input. Please enter an integer or 'stop' to finish.")
    filtered_values = filter_integers(values)
    print(f"Filtered integers: {filtered_values}")

if __name__ == "__main__":
    main()