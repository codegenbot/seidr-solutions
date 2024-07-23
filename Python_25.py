from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        total += num**2
    return total


if __name__ == "__main__":
    user_input = input("Enter a list of integers separated by space: ")
    user_numbers = [int(num) for num in user_input.split()]
    print(sum_of_squares(user_numbers))