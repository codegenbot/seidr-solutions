```Python
def find_max_min(lst):
    if not lst:
        return None, None
    max_num = min_num = lst[0]
    for num in lst:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return max_num, min_num

user_input = input("Enter a list of numbers (space separated): ")
if user_input.strip() == "":
    print("Please enter some values.")
else:
    numbers = [int(num) for num in user_input.split()]
    max_value, min_value = find_max_min(numbers)
    print(f"The maximum value is {max_value} and the minimum value is {min_value}.")