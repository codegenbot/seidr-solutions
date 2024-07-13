def luhn(digits):
    total = 0
    for i in range(16):
        if i % 2 == 1:
            temp = digits[i] * 2
            if temp > 9:
                total += temp - 9
            else:
                total += temp
        else:
            total += digits[i]
    return total


# Read input
n = int(input())
digits = list(map(int, input().split()))

# Calculate and print output
print(luhn(digits))