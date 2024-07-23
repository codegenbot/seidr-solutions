Write a Python function that takes as input a list of integers and returns two values: the sum of all numbers in the list and their product.

The function signature is:
def sum_product(numbers: List[int]) -> Tuple[int, int]:

Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for num in numbers:
        total_sum += num
        product *= num
    
    return (total_sum, product) if numbers else (0, 1)