from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values: ").split()
    values = [int(item) if item.isdigit() else item for item in user_input]
    print(filter_integers(values))