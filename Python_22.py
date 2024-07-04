from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input("Enter values separated by spaces: ")
    values = user_input.split()
    for i, x in enumerate(values):
        try:
            values[i] = int(x)
        except ValueError:
            pass
    print(filter_integers(values))