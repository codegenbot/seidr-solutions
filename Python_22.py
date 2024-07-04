from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input("Enter values separated by spaces: ")
    values = user_input.split()
    filtered_values = []
    for value in values:
        try:
            filtered_values.append(int(value))
        except ValueError:
            continue
    print(filter_integers(filtered_values))