def digitSum(n=""):
    if isinstance(n, str):
        n = sum(int(digit) for digit in n.replace(" ", "").lower())
    elif not n:  
        n = int(input("Enter a number: "))
    return sum(int(i) for i in str(abs(n)))