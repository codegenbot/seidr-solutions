import sys

input_data = sys.stdin.readline().strip()
num_list = list(map(int, input_data.split()))
output = (
    num_list[0] * num_list[1] * num_list[2] * num_list[3]
    if len(num_list) == 4 and all(isinstance(num, int) for num in num_list)
    else "Invalid input. Please enter four numeric values separated by space."
)
print(output)