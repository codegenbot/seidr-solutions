from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 0)
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)


def main():
    input_numbers = input("Enter a list of integers separated by space: ")
    numbers = [int(num) for num in input_numbers.split()]

    result = sum_product(numbers)
    print(f"Sum is {result[0]} and Product is {result[1]}")


if __name__ == "__main__":
    main()