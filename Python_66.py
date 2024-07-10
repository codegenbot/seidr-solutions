def digitSum(n=""):
    if isinstance(n, int) or n == "":
        return sum(int(digit) for digit in str(abs(n)))
    else:
        n = int(input("Enter a number: "))
        return sum(int(digit) for digit in str(abs(n)))