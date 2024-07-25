from typing import List

def rolling_max():
    numbers = []
    while True:
        input_line = input().split()
        if len(input_line) == 0 or input_line[0].lower() == 'stop':
            break
        numbers.append(list(map(int, input_line)))

    result = [max(row) for row in zip(*numbers)]
    return result

print(rolling_max())