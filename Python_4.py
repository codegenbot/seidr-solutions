num_list = list(map(int, input("Enter exactly four numbers separated by space (e.g., 1 2 3 4): ").split()))
if len(num_list) != 4:
    print("Invalid input. Please enter exactly four numbers separated by space.")
else:
    result = 1
    for num in num_list:
        result *= num
    print(result)