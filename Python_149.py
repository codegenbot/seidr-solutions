```
def sorted_list_sum(input_list):
    while True:
        try:
            user_input = input("Enter a list of words separated by space: ").split()
            break
        except ValueError:
            print("Invalid input. Please enter words separated by spaces.")

    sum_val = 0
    for word in user_input:
        if "".join(filter(str.isdigit, word)).isdigit():
            sum_val += int(word)

    while True:
        confirm = input(f"Sum of digits is {sum_val}. Is this correct? (y/n): ")
        if confirm.lower() == 'y':
            return sum_val
        elif confirm.lower() == 'n':
            return sorted_list_sum(input_list)
        else:
            print("Invalid confirmation. Please enter y or n.")