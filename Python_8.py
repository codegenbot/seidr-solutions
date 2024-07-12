```
from typing import List, Tuple


def sum_product():
    numbers = input("Enter space-separated integers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter only integers.")
        return
    
    if not numbers:
        result = (0, 1)
    else:
        total_sum = sum(numbers)
        product = 1
        for num in numbers:
            product *= num
        result = (total_sum, product)
    
    print(f"The sum is {result[0]} and the product is {result[1]}.")


if __name__ == "__main__":
    sum_product()