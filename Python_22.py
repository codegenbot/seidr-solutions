from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [int(x) for x in values if x.lstrip('-').isdigit()]

if __name__ == "__main__":
    user_input = input("Enter values separated by spaces: ")
    values = user_input.split()
    print(filter_integers(values))