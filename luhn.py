digits = list(map(int, input().split()[:16]))  # Read input as a list of integers

for i in range(1, len(digits), 2):
    digits[i] = digits[i] * 2
    if digits[i] > 9:
        digits[i] -= 9

sum_digits = sum(digits)  # Calculate sum of modified digits
print(sum_digits)