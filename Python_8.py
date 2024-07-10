from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    while True:
        try:
            numbers = input("Enter a list of space-separated integers: ")
            numbers = [int(num) for num in numbers.split()]
            break
        except ValueError:
            print("Invalid input. Please enter a list of integers.")
    if len(numbers) == 0:
        return 0, 1
    else:
        total_sum = sum(numbers)
        product = 1
        for num in numbers:
            product *= num
        return total_sum, product