# Change the second loop to start from the last digit
for i in range(len(digits) - 1, -1, -2):
    total += digits[i]

print(total)