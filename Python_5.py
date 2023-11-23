from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

# Read input
input_numbers = list(map(int, input().split()))
delimiter = int(input())

# Perform calculation
output = intersperse(input_numbers, delimiter)

# Print output
print(*output)