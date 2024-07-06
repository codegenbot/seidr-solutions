def sorted_list_sum(input_list):
    while True:
        try:
            user_input = input("Enter a list of words separated by space: ").split()
            sum_val = 0
            for word in user_input:
                if "".join(filter(str.isdigit, word)).isdigit():
                    sum_val += int(word)
            if sum_val == 0:
                print("No valid number was entered. Please enter numbers and/or words separated by spaces.")
                break
            else:
                return sum_val
        except ValueError:
            print("Invalid input. Please enter numbers and/or words separated by spaces.")
        else:
            print("Please try again.")