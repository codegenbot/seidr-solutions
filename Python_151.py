```Python
def double_the_difference(input_list):
    if len(input_list) < 1:
        return 0
    avg = sum(map(float, input_list)) / len(input_list)
    sorted_list = sorted(map(float, input_list))
    diff = abs(sorted_list[len(input_list)//2] - avg)
    return 2 * diff

while True:
    try:
        input_str = input("Enter numbers separated by space: ")
        input_list = list(map(float, input_str.split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")

print(double_the_difference(input_list))