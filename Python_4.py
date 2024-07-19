num_list = []
while len(num_list) != 4 or not all(isinstance(num, int) for num in num_list):
    num_list = list(
        map(
            int,
            input(
                "Enter exactly four numbers separated by space (e.g., 1 2 3 4): "
            ).split(),
        )
    )
    if len(num_list) != 4 or not all(isinstance(num, int) for num in num_list):
        print(
            "Invalid input. Please enter exactly four numeric values separated by space."
        )

result = num_list[0] * num_list[1] * num_list[2] * num_list[3]
print(result)