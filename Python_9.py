```
from typing import List


def rolling_max():
    T = int(input("Enter number of test cases: "))
    
    for _ in range(T):
        numbers = list(map(int, input("Enter numbers separated by space: ").split()))
        max_seen_so_far = []
        for i in range(len(numbers)):
            if not max_seen_so_far:
                max_seen_so_far.append(max(0))
            else:
                max_seen_so_far.append(max(max_seen_so_far[i-1], numbers[i]))
        print(max_seen_so_far)

rolling_max()