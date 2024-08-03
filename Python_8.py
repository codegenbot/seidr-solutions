Here is the completed code:

Here is the problem: Write a function that takes a list of integers as input and returns a tuple. The first element of the tuple should be the sum of all numbers in the list, and the second element should be the product of all numbers in the list.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (total_sum, product)