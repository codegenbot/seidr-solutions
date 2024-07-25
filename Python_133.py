```
def sum_squares(lst):
    return round(sum([round(int(x))**2 for x in lst if type(x) == int]))

input_str = "Enter numbers (separated by commas): "
user_input = input(input_str)

numbers = [x for x in user_input.split(",") if x.replace("-","").replace(".","").isdigit()]

print(f"The sum of squares is: {sum_squares(numbers)}")