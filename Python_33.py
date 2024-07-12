while True:
    try:
        user_input = [int(i.strip()) for i in input("Enter a list of numbers separated by comma: ").split(",")]
    except ValueError:
        print("Invalid input. Please enter numbers separated by commas.")
    else:
        if len(set(map(str, user_input))) != len(user_input):
            print("Please do not repeat the same number.")
        else:
            break
print(sorted(user_input))