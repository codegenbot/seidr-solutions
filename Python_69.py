```
def find_max_min(lst):
    max_num = min_num = lst[0]
    for num in lst:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return max_num, min_num

numbers = []
while True:
    user_input = input("Enter a number (or 'stop' to finish): ")
    if user_input.lower() == "stop":
        break
    try:
        numbers.append(int(user_input))
    except ValueError:
        print("Invalid input. Please enter a valid integer or 'stop'.")
if numbers:
    max_num, min_num = find_max_min(numbers)
    print(f"The maximum number in the list is {max_num} and the minimum number is {min_num}")
else:
    print("No numbers were entered.")