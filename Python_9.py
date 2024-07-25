from typing import List

def rolling_max():
    numbers = [int(i) for i in input().split()]
    result = []
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        num_input = [int(i) for i in command]
        result.append(max(num_input))
    
    return result

print(rolling_max())