try:
    num_list = list(map(int, input().strip().split()))
    output = (
        str(num_list[0] * num_list[1] * num_list[2] * num_list[3])
        if len(num_list) == 4
        else "Invalid input. Please enter four numeric values separated by space."
    )
except:
    output = "Invalid input. Please enter four numeric values separated by space."
print(output)