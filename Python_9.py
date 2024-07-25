```
from typing import List

def rolling_max() -> List[int]:
    numbers = []
    
    while True:
        user_input = input("Enter space-separated numbers (or 'q' to quit): ")
        
        if user_input.lower() == 'q':
            break
            
        try:
            numbers.append([int(num) for num in user_input.split()])
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces or type 'q' to quit.")
    
    return [max(row) for row in zip(*numbers)]