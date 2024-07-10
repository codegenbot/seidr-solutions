def digitSum():
    n = int(input("Enter a number: "))
    print(sum(int(digit) for digit in str(abs(n))))