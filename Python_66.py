def digitSum(n=""):
    if not n:
        n = int(input("Enter a number: "))
    return sum(int(digit) for digit in str(abs(int(n))))