def rounded_avg():
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    if num1 > num2:
        return -1
    avg = (num1 + num2) // 2
    return str(avg).zfill(16)