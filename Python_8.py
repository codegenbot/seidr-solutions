from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum if len(numbers) > 0 else 0, product if len(numbers) > 0 else 1)


def main():
    input_list = input("Enter a list of integers separated by space: ")
    numbers = [int(num) for num in input_list.split()]
    result = sum_product(numbers)
    print(f"Sum: {result[0]}, Product: {result[1]}")


if __name__ == "__main__":
    main()