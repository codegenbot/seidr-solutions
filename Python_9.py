from typing import List
from itertools import zip_longest, repeat

def rolling_max():
    numbers = []
    k = int(input())  
    while True:
        input_line = input().split()
        if len(input_line) == 0 or input_line[0].lower() == 'stop':
            break
        numbers.append(list(map(int, input_line)))

    result = []
    for _ in range(len(numbers[0])):
        chunk = [row[i] for row in zip_longest(*numbers, fillvalue=0)]
        result.append(max(map(int, filter(None, chunk))))

    return result

print(rolling_max())