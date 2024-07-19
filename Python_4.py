try:
    num_list = list(map(float, input("Enter exactly four numbers separated by space: ").split()))
    if len(num_list) != 4:
        raise ValueError
    result = 1
    for num in num_list:
        result *= num
except ValueError:
    print("Invalid input. Please enter exactly four numbers separated by space.")
else:
    print(result)