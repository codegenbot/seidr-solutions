def search(lst, target):
    for num in lst:
        if num == target:
            return num


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
    target_num = int(input("Enter the target number: "))
    print(f"The first occurrence of {target_num} in the list is {search(numbers, target_num)}")