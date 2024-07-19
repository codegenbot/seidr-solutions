try:
    num_list = list(
        map(
            int,
            input(
                "Enter exactly four numbers separated by space (e.g., 1 2 3 4): "
            ).split(),
        )
    )
    if len(num_list) != 4:
        print("Invalid input. Please enter exactly four numbers separated by space.")
    else:
        result = num_list[0] * num_list[1] * num_list[2] * num_list[3]
        print(result)
        # ask for input again to receive expected input
        input("Press Enter to continue...")
except ValueError:
    print("Invalid input. Please enter numeric values separated by space.")