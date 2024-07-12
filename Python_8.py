from typing import List

def sum_product(numbers: List[int]) -> int:
    total_sum = 0
    product = 1
    
    for num in numbers:
        user_input = input(f"Enter a number ({num} left): ")
        
        if user_input.isdigit():
            num = int(user_input)
            total_sum += num
            product *= num
        else:
            print("Invalid input. Please enter a digit.")
    
    return total_sum, product

result = sum_product([])
print("Sum: ", result[0])
print("Product: ", result[1])