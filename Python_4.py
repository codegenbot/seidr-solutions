try:
    num1, num2, num3, num4 = map(float, input("Enter exactly four numbers separated by space: ").split())
    print(num1 + num2 + num3 + num4)
except ValueError or TypeError:
    print("Invalid input. Please enter exactly four numbers separated by space.")