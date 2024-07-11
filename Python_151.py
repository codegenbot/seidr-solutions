```
def double_the_difference(lst):
    if len(lst) != 2:
        return "Please enter exactly two numbers!"
    try:
        num1, num2 = map(int, lst)
        return abs(num1 - num2) * 2
    except ValueError:
        return "Invalid input. Please enter exact two numeric values!"

print("Enter elements separated by space: ")
user_input = input()
try:
    lst = [x for x in user_input.split() if x.strip()]
    if len(lst) != 2:
        print("Invalid input. Please enter exactly two numbers!")
    else:
        print(double_the_difference(lst))
except ValueError:
    print("Invalid input. Please enter exactly two numbers!")