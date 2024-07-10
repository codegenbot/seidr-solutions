def sum_of_odd_numbers_in_every_other_element():
    while True:
        numbers = input("Enter the elements of a list separated by space: ")
        try:
            numbers = list(map(int, numbers.split()))
            if not numbers:
                raise ValueError
            return sum(i for i in numbers[1::2] if i % 2 != 0)
        except ValueError:
            print("Invalid input. Please try again.")


def solution():
    return sum_of_odd_numbers_in_every_other_element()


solution()