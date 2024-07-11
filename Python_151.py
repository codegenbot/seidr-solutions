def double_the_difference():
    while True:
        user_input = input("Enter elements separated by comma: ")
        if len(user_input.split(',')) == 2:
            a, b = map(int, user_input.split(','))
            while True:
                print("Please enter exactly two numbers!")
        else:
            print("Please enter exactly two numbers!")