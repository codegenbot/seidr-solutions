import sys


def sum_product(numbers):
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result


if __name__ == "__main__":
    try:
        numbers = list(map(int, sys.argv[1:]))
        result = sum_product(numbers)
        print(*result)
    except (ValueError, TypeError, IndexError):
        print("Invalid input. Please enter space-separated numbers.")