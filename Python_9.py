import sys

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    return [max_num := max(max_num, num) for num in numbers]

numbers = list(map(int, sys.argv[1:]))
result = rolling_max(numbers)
result