user_input = input("Please enter two integers separated by a space: ").split()
if len(user_input) == 2:
    num1, num2 = map(int, user_input)
    # continue with the rest of your code here
else:
    print("Please enter exactly two integers separated by a space.")