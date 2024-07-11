from typing import List

def rolling_max(input_str: str) -> List[int]:
    numbers = []
    for num in input_str.split():
        if not num.isdigit():  
            return [0] 
        numbers.append(int(num))
    
    if any(not x.isdigit() for x in input_str):
        return [0] 
    
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result