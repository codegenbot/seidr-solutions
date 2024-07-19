from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 0)
    
    total_sum = sum(numbers)
    
    if 0 in numbers:
        return (total_sum, 0)
    
    total_product = eval("*".join(map(str, numbers)))
    
    return (total_sum, total_product)

# Read input from user
numbers = list(map(int, input().split()))

# Call the function and print the result
result = sum_product(numbers)
print(result)