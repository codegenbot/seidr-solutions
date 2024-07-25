```
from typing import List


def rolling_max():
    numbers = [int(i) for i in input().split()]
    result = []
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == "stop":
            break
        if command[0].lower() == 'add':
            numbers += [int(i) for i in command[1:]]
        elif command[0].lower() == 'remove':
            for i in reversed(range(len(command[1:]))) :
                numbers.pop(0)
        start_index = int(command[0])
        result.append(
            max(
                [
                    numbers[i]
                    for i in range(
                        start_index - 1, min(len(numbers), start_index + len([int(i) for i in command[1:]]))
                    )
                ]
            )
        )
    return result


print(rolling_max())