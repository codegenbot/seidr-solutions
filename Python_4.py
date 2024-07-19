user_input = input("Enter four numbers separated by space: ").strip().split()
if len(user_input) != 4:
    print("Invalid input. Please enter exactly four numbers separated by space.")
else:
    numbers = [float(num) for num in user_input]
    print(sum(numbers))