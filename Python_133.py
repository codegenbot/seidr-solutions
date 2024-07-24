while True:
    user_input = input("Enter numbers separated by space or 'exit' to quit: ").split()
    if not user_input:
        print("Please enter some numbers.")
        continue
    elif user_input[0].lower() in ['exit', 'quit']:
        break
    while not all(map(lambda x: isinstance(int(x), int) and int(x) > 0, user_input)):
        print("Invalid input. Please enter valid positive numbers separated by space:")
        user_input = input("Enter numbers separated by space or 'exit' to quit: ").split()

    total_sum_of_squares = sum_squares(list(map(int, user_input)))
    print(f"The sum of squares is {total_sum_of_squares}")