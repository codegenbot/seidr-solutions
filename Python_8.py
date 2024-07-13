from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


def main():
    user_input = input("Enter space-separated integers: ")
    try:
        numbers = [int(num) for num in user_input.split()]
        result = sum_product(numbers)
        print(f"Sum: {result[0]}, Product: {result[1]}")
    except ValueError:
        print("Invalid input. Please enter only integers separated by spaces.")


if __name__ == "__main__":
    main()