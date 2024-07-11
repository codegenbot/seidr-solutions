def double_the_difference():
    user_input = input("Enter elements separated by comma: ")
    a, b = map(int, user_input.split(','))
    return abs(a - b) * 2

print(double_the_difference())