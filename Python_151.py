def solution():
    n = int(input("Enter an integer: "))
    first_half = n // 2
    second_half = n - first_half
    return abs(first_half - 2*second_half)

print(solution())