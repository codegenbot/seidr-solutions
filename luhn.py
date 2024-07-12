# Read input
n = int(input())
numbers = list(map(int, input().split()))

# Apply Luhn's algorithm
total = 0
for i in range(n):
    num = numbers[i]
    if i % 2 == 1:
        num *= 2
        if num > 9:
            num -= 9
    total += num

# Print output
print(total)