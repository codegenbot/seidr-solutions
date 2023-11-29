from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    user_input = input("Enter space-separated numbers: ")
    numbers = [int(num) for num in user_input.split()]

    delimiter = int(input("Enter the delimiter: "))

    result = [x for num in numbers for x in (num, delimiter)] + [delimiter]
    
    return result