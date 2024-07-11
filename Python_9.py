```Python
from typing import List

def rolling_max():
    input_str = input("Please enter some space-separated numbers: ")
    
    numbers = []
    for num in input_str.split():
        if not num.isdigit():  
            return ["Invalid input"]  
        numbers.append(int(num))
    
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result

print(rolling_max())