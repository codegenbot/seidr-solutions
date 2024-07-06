def solution():
    first_half_sum = int(input("Enter the sum of the first half: "))
    second_half_sum = int(input("Enter the sum of the second half: "))
    return abs(first_half_sum - 2*second_half_sum)