def solution():
    first_half_sum = int(input("Enter first half sum: "))
    second_half_sum = int(input("Enter second half sum: "))
    return abs(first_half_sum - 2*second_half_sum)

print(solution())