def calculate_sum_of_digits(n: int) -> int:
    while True:
        try:
            n = int(input())
            break
        except ValueError:
            print("Invalid input! Please enter a valid integer.")

    return sum(int(digit) for digit in str(abs(n)))