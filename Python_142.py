```
def sum_squares(input_str):
    user_input = input("Enter a list of numbers separated by spaces: ")
    lst = [int(num) for num in user_input.split()]
    if len(lst) == 0:
        return "Please enter at least one number."
    total = 0
    for num in lst:
        total += num**2
    return f"The sum of the squares is {total}."