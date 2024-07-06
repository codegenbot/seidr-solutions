def sorted_list_sum():
    while True:
        try:
            user_input = input("Enter a list of words separated by space (or 'exit' to quit): ").split()
            sum_val = 0
            for word in user_input:
                if "".join(filter(str.isdigit, word)).isdigit():
                    sum_val += int(word)
            if sum_val == 0 and len(user_input) > 1:
                print("No valid number was entered. Please enter numbers and/or words separated by spaces.")
            elif input("Continue? (yes/no): ").lower() != 'yes':
                print("Exiting.")
                break
            else:
                return sum_val
        except ValueError:
            print("Invalid input. Please enter numbers and/or words separated by spaces.")