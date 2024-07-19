while True:
    try:
        num_list = list(map(float, input("Enter exactly four numbers separated by space (e.g., 1.0 2.5 3.7 4.2): ").split()))
        if len(num_list) != 4:
            print("Invalid input. Please enter exactly four numbers separated by space.")
        else:
            result = num_list[0] * num_list[1] * num_list[2] * num_list[3]
            print(result)
            break
    except ValueError:
        print("Invalid input. Please enter numeric values separated by space.")