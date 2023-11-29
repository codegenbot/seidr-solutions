from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    # Read input from the user
    # Assuming the input is space-separated integers
    user_input = input()
    numbers = [int(num) for num in user_input.split()]

    # Read the delimiter from the user
    delimiter = int(input())

    # Perform the intersperse operation
    result = [x for num in numbers for x in (num, delimiter)] + [delimiter]
    
    return result