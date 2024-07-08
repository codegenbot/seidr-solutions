from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = set()
    result = []
    
    for number in numbers:
        if number not in unique_numbers:
            result.append(str(number))
            unique_numbers.add(number)
            
    return [int(num) for num in sorted(result)]