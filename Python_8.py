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
    while True:
        numbers_str = input("Enter a list of integers separated by space: ")
        try:
            numbers = [
                int(num)
                for num in numbers_str.split()
                if num.replace("-", "").replace(".", "").isdigit()
            ]
            break
        except ValueError:
            print("Invalid input. Please enter a list of integers separated by space.")
    if not numbers:
        print("Expected input: Enter some numbers, e.g., 1 2 3")
        result = (0, 1)
    else:
        result = sum_product(numbers)
    print(f"Sum is {result[0]} and Product is {result[1]}")


if __name__ == "__main__":
    main()