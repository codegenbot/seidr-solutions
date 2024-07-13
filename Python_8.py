from typing import List, Tuple


def sum_product():
    while True:
        try:
            numbers = list(
                map(
                    int,
                    input(
                        "Enter a sequence of numbers (space-separated) or 'stop' to quit: "
                    ).split(),
                )
            )
            if len(numbers) == 0:
                return
            total_sum = 0
            product = 1
            for num in numbers:
                total_sum += num
                product *= num
            print(f"Sum is {total_sum} and Product is {product}")
        except ValueError:
            if input("Invalid input. Try again? (yes/no): ") == "no":
                return


sum_product()