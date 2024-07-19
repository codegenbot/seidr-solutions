try:
    num_list = list(map(int, input().strip().split()))
    output = (
        num_list[0] * num_list[1] * num_list[2] * num_list[3]
        if len(num_list) == 4 and all(isinstance(num, int) for num in num_list)
        else "Invalid input. Please enter exactly four numeric values separated by space."
    )
except:
    output = "Invalid input. Please enter exactly four numeric values separated by space."
print(output)