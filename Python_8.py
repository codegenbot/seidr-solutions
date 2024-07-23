from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total_sum = 1
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


def main():
    while True:
        try:
            n = int(input("Enter the number of elements (or -1 to stop): "))
            if n == -1:
                break
            numbers = [
                int(x)
                for x in input("Enter {} space-separated integers: ".format(n)).split()
            ]
            total_sum, product = sum_product(numbers)
            print("Sum: {}, Product: {}".format(total_sum, product))
        except ValueError:
            print(
                "Invalid input. Please enter an integer and then space-separated integers."
            )


if __name__ == "__main__":
    main()