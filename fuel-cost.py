nums = input().split()
result = sum([(int(digit) // 3) - 2 for digit in ''.join(nums)])
print(abs(result))