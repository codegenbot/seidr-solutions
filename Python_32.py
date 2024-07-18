try:
    input_list = list(map(int, input("Enter two integers separated by a space: ").split()))
    if len(input_list) == 2:
        result = find_zero(input_list)
        print(result)
    else:
        print("Input should contain exactly two integers separated by a space.")
except ValueError:
    print("Invalid input. Please enter two integers separated by a space.")