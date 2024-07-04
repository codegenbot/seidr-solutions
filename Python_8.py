from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

if __name__ == "__main__":
    try:
        input_line = input().strip()  # Ensure no leading/trailing spaces/newlines
        numbers = list(map(int, input_line.split()))
        result = sum_product(numbers)
        print(result)
    except ValueError:
        print("Invalid input")