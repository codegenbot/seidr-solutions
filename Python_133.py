def sum_squares(lst):
    return round(sum([round(x)**2 for x in lst]))

input_str = "Enter numbers (separated by commas): "
user_input = input(input_str)

numbers = [int(num) for num in user_input.split(",")]

print(f"The sum of squares is: {sum_squares(numbers)}")