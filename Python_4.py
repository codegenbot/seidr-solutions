while True:
    num_list = list(
        map(
            int,
            input(
                "Enter exactly four numbers separated by space (e.g., 1 2 3 4): "
            ).split(),
        )
    )
    if len(num_list) != 4 or any(not isinstance(num, int) for num in num_list):
        print(
            "Invalid input. Please enter exactly four numeric values separated by space."
        )
    else:
        result = num_list[0] * num_list[1] * num_list[2] * num_list[3]
        print(result)
        break  # exit the loop when input is correct