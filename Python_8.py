Here is the problem: 

Write a function that calculates the sum and product of all numbers in a list. The function should take as input a list of integers and return a tuple where the first element is the sum of the numbers and the second element is their product.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (total_sum, product)