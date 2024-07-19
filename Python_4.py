while True:
    try:
        num1, num2, num3, num4 = map(float, input("Enter exactly four numbers separated by space: ").split())
        if len([num1, num2, num3, num4]) != 4:
            raise ValueError
        result = num1 + num2 + num3 + num4
    except ValueError:
        print("Invalid input. Please enter exactly four numbers separated by space.")
    else:
        print(result)
        break