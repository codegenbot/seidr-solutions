```Python
from typing import List, Tuple

def sum_product():
    while True:
        try:
            numbers = list(map(int, input("Enter a series of space-separated numbers: ").split()))
            return numbers
        except ValueError:
            print("Invalid input. Please provide a list of integers separated by spaces.")

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product

if __name__ == "__main__":
    result = sum_product()
    print("The sum of the numbers is: ", result[0])
    print("The product of the numbers is: ", result[1])