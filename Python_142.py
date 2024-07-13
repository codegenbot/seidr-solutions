while True:
    try:
        user_input = input("Please enter a comma-separated list of integers: ")
        lst = list(map(int, user_input.split()))
        break
    except ValueError:
        print("Invalid input. Please enter a valid list of integers.")

if len(lst) > 0:
    print(sum_squares(lst))
else:
    print("Invalid input. Please enter a valid list of integers.")