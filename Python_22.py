from typing import List, Any

def filter_integers(values: List[Any], user_input: List[int]) -> List[int]:
    integers = [value for value in values if isinstance(value, int)]
    print("Enter your input (space-separated numbers): ")
    user_input = list(map(int, input().split()))
    return integers + user_input