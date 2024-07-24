num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

total_sum = sum([num1, num2, num3])
if total_sum == 19:
    return "Sum is 19"
elif 17 < total_sum < 55 and total_sum != 19:
    return "Correct"
else:
    return "Incorrect"