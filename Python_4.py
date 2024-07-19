try:
    num_list = list(map(float, input().split()))
    if len(num_list) != 4:
        raise ValueError("Invalid input. Please enter exactly four numbers separated by space.")
    print(int(num_list[0] * num_list[1] * num_list[2] * num_list[3]))
except (ValueError, IndexError) as e:
    print(e)