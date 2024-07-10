from typing import List

def rolling_max():
    numbers = list(map(int, input("Enter space-separated integers: ").split()))
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result

print(rolling_max())