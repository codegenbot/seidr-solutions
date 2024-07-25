from typing import List

def rolling_max():
    numbers = []
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        num_input = [int(i) for i in command]
        numbers.append(num_input)

    result = [max(row) for row in zip(*numbers)]
    return result

print(rolling_max())