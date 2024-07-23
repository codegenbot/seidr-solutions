Write a Python function to calculate the sum of all numbers in a list and their product.

The function should take as input a list of integers and return a tuple containing the sum and the product.
If the input list is empty, it should return (0, 1).

Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for num in numbers:
        total_sum += num
        product *= num
    
    return (total_sum, product) if numbers else (0, 1)