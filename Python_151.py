def solution():
    while True:
        try:
            first_half_sum = int(input("Enter first half sum: "))
            second_half_sum = int(input("Enter second half sum: "))
            return abs(first_half_sum - 2*second_half_sum)
        except ValueError:
            print("Invalid input. Please enter a whole number for both sums.")

print(solution())