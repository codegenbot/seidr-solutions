from typing import List

def rolling_max(input_str: str) -> List[int]:
    numbers = []
    for num in input_str.split():
        if num == "": 
            continue
        if not num.isdigit():  
            return ["Invalid input"]  
        numbers.append(int(num))
    
    result = [max(map(int, (str(numbers[:i+1])).split())) for i in range(len(numbers))]
    return result