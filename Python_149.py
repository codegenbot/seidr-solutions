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
    return sum_val