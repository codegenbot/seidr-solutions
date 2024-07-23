Write a function that takes in a list of integers as input. This function should calculate the sum and product of all numbers in the list. If the list is empty, it should return (0,1) as default values.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for num in numbers:
        total_sum += num
        product *= num
    
    return (total_sum, product) if numbers else (0, 1)