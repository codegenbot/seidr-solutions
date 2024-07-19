num_list = list(map(float, input().strip().split()))
if len(num_list) != 4:
    print("Invalid input. Please enter exactly four numbers separated by space.")
else:
    print(num_list[0] * num_list[1] * num_list[2] * num_list[3])