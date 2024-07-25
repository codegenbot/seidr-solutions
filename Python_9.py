```
from typing import List

def rolling_max():
    numbers = []
    while True:
        num_str = input("Enter a list of integers (or 'stop' to finish): ")
        if num_str.lower() == 'stop':
            break
        row = list(map(int, num_str.split()))
        numbers.append(row)

    result = [max(col) for col in zip(*numbers)]
    return result

print(rolling_max())