from typing import List, Tuple


def sum_product():
    numbers = input("Enter space-separated integers: ")
    
    try:
        nums = [int(num) for num in numbers.split()]
    except ValueError:
        print("Invalid input. Please enter integers.")
        return
    
    total_sum = 0
    product = 1

    for num in nums:
        total_sum += num
        product *= num

    return total_sum, product if product != 0 else 1


sum_product()