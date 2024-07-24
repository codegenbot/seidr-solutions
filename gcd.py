user_input = input("Please enter two integers separated by a space (e.g., \"10 15\"): ")
num_list = list(map(int, user_input.split()))

if len(num_list) == 2:
    num1, num2 = num_list
    # Continue with the desired operations using num1 and num2
else:
    print("Please enter exactly two integers separated by a space.")