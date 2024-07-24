user_input = input("Please enter two integers separated by a space: ")
split_input = user_input.split()

if len(split_input) != 2:
    print("Please enter exactly two integers separated by a space.")
else:
    num1, num2 = map(int, split_input)