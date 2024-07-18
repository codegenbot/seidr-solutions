def find_zero(input_list):
    return input_list.index(0.0)


input_list = list(
    map(float, input("Enter space-separated numbers (2 elements): ").split())
)
if len(input_list) != 2:
    print("Error: Please enter exactly 2 numbers.")
else:
    result = find_zero(input_list)
    print(result)