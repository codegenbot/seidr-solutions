```
def double_the_difference(lst):
    if len(lst) != 2:
        return "Please enter exactly two numbers!"
    a, b = map(int, lst)
    return abs(a - b) * 2

print("Enter elements separated by comma: ")
user_input = input()
try:
    lst = [int(x) for x in user_input.split(',')]
    print(double_the_difference(lst))
except ValueError:
    print("Invalid input. Please enter exactly two numbers!")