In this problem, we need to write a function that calculates the sum and product of all numbers in a given list. We can do this by initializing variables for the sum and product, then iterating over each number in the list, adding it to the sum and multiplying it into the product. Finally, we return both the sum and product as a tuple.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product