from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


def main():
    try:
        n = int(input("Enter the number of integers to process: "))
        if n <= 0:
            raise ValueError
        numbers = [
            int(x) for x in input(f"Enter {n} integers separated by spaces: ").split()
        ]
        result = sum_product(numbers)
        print(f"The sum is {result[0]} and the product is {result[1]}.")
    except ValueError as e:
        print("Invalid input. Please enter positive integer values.")


if __name__ == "__main__":
    main()