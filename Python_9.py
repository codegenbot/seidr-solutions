```
from typing import List

def rolling_max():
    numbers = [int(i) for i in input().split()]
    result = []
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        num_input = [int(i) for i in command[1:]]
        start_index = int(command[0])
        result.append(max([numbers[i] for i in range(start_index-1, min(len(numbers), start_index+ len(num_input)))]))
    
    return result

print(rolling_max())