from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

if __name__ == "__main__":
    try:
        numbers = input().strip().split()
        if not numbers:
            print("No input numbers provided")
        else:
            numbers = list(map(int, numbers))
            result = sum_product(numbers)
            print(result[0], result[1])
    except ValueError:
        print("Invalid input. Please provide a list of integers.")