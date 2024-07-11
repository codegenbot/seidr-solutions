def double_the_difference(input_str):
    numbers = list(map(int, input_str.split(',')))
    return 2 * abs(numbers[0] - numbers[1])

print(double_the_difference(input("Enter elements separated by comma: ")))