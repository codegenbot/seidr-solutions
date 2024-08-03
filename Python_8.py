Here is the problem: 

Write a function that calculates the sum and product of all elements in a list of integers. If the input list is empty, the function should return (0, 1). The function should take a list of integers as input and return a tuple containing the sum and product of these numbers.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (total_sum, product)