from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

if __name__ == "__main__":
    try:
        numbers = list(map(int, input("Enter numbers separated by spaces: ").strip().split()))
        if not numbers:
            raise ValueError("No numbers entered")
        result = sum_product(numbers)
        print("Sum:", result[0], "Product:", result[1])
    except ValueError as e:
        print("Invalid input:", e)