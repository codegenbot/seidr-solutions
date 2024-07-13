def search(lst):
    max_num = -1
    for num in lst:
        if num > 0 and (max_num == -1 or num > max_num):
            max_num = num
    return max_num

numbers = []
while True:
    user_input = input("Enter a number (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    try:
        numbers.append(int(user_input))
    except ValueError:
        print("Invalid input. Please enter a valid integer or 'stop'.")

print(f"The maximum number in the list is {search(numbers)}")