def search(lst):
    max_num = float("-inf")
    for num in lst:
        if num > max_num:
            max_num = num
    return max_num

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
    print(f"The maximum number in the list is {search(numbers)}")
else:
    print("No numbers were entered.")