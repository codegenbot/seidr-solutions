inputs = input("Please enter two integers separated by a space: ").split()

if len(inputs) == 2:
    num1, num2 = map(int, inputs)
else:
    print("Please enter exactly two integers separated by a space.")