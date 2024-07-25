```
from typing import List

def rolling_max():
    numbers = list(map(int, input().split()))
    result = []
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        start_index = int(command[0])
        num_input = [int(i) for i in command[1:]]
        result.append(max([numbers[i] for i in range(start_index-1, min(len(numbers), start_index+len(num_input)))]))
    
    return result

print(rolling_max())