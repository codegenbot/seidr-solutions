from typing import List

def rolling_max():
    numbers = []
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        if not numbers:  
            numbers.append([int(i) for i in command])
        else:
            numbers.append([int(i) for i in command])

    result = [max(row) for row in zip(*numbers)]
    return result

print(rolling_max())