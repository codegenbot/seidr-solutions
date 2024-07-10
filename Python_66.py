def digitSum():
    n = int(input("Enter a number: "))
    return sum(int(digit) for digit in str(n))

print(digitSum())