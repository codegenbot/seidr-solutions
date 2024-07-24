```
from typing import List

def filter_integers() -> List[int]:
    user_input = input("Enter a list of comma-separated numbers (space for separation): ")
    numbers = [int(num) for num in user_input.split(',') if num]
    return [num for num in numbers]