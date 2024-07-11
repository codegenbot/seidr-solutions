from typing import List

def rolling_max():
    numbers = [int(num) for num in input("Enter numbers separated by comma: ").replace(" ", ",").split(",")]
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result