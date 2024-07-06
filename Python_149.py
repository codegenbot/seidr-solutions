def sorted_list_sum(input_list):
    while True:
        try:
            user_input = input("Enter a list of numbers separated by space: ").split()
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    return str(sum(sorted(map(int, user_input))))