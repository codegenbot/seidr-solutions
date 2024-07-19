while True:
    try:
        num_list = list(
            map(float, input("Enter exactly four numbers separated by space: ").split())
        )
        if len(num_list) != 4:
            raise ValueError(
                "Invalid input. Please enter exactly four numbers separated by space."
            )
        print(num_list[0] * num_list[1] * num_list[2] * num_list[3])
        break
    except ValueError as e:
        print(e)