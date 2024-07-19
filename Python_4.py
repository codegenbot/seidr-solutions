num_list = list(
    map(int, input("Enter four numbers separated by space (e.g., 1 2 3 4): ").split())
)
(
    print(num_list[0] * num_list[1] * num_list[2] * num_list[3])
    if len(num_list) == 4 and all(isinstance(num, int) for num in num_list)
    else print("Invalid input. Please enter four numeric values separated by space.")
)