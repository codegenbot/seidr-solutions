```
from typing import List

def rolling_max():
    numbers = [int(i) for i in input().split()]
    max_length = len(numbers)
    result = [max(row) for row in zip(*[numbers])]
    
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        num_input = [int(i) for i in command]
        if len(num_input) != max_length:
            print("Invalid input. Please provide the same number of elements in each list.")
            continue
        numbers.extend(num_input)
        
        # Calculate and display rolling maximum
        temp_result = []
        for i in range(len(numbers)):
            temp_result.append(max(numbers[i:i+max_length]))
        result = temp_result
    
    return result

print(rolling_max())