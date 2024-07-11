def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

values = input("Enter integers separated by space: ")
values_list = [int(i) for i in values.split()]
if len(values_list) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = values_list[0], values_list[1]
    print(gcd(a, b))