from typing import List, Tuple

def sum_product():
    numbers = list(map(int, input("Enter space-separated integers (1-10): ").split()))
    
    if not all(1 <= num <= 10 for num in numbers):
        print("Invalid input. Please enter integers from 1 to 10.")
        return None
    
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    return (total_sum, product)

print(sum_product())