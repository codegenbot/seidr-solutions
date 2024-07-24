from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in map(int, values) if isinstance(value, int)]

values = input("Enter values (space-separated): ").split()
print(filter_integers(map(int, values)))