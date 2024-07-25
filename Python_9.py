from typing import List

def rolling_max():
    numbers = []
    while True:
        num_str = input("Enter a list of integers (or 'stop' to finish): ")
        if num_str.lower() == 'stop':
            break
        numbers.append(list(map(int, num_str.split())))

    result = [max(row) for row in zip(*numbers)]
    return result

print(rolling_max())