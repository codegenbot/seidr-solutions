def double_the_difference():
    while True:
        user_input = input("Enter elements separated by comma: ")
        if len(user_input.split(',')) == 2:
            a, b = map(int, user_input.split(','))
            return abs(a - b) * 2
        else:
            print("Please enter exactly two numbers!")

print(double_the_difference())