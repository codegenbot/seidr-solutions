def double_the_difference(lst):
    if len(lst) == 2:
        return abs(int(lst[0]) - int(lst[1])) * 2
    else:
        return "Please enter exactly two numbers!"

print("Enter elements separated by comma: ")
user_input = input()
try:
    lst = [x for x in user_input.split(',') if x.strip()]
    if len(lst) == 2:
        print(double_the_difference(lst))
    else:
        print("Invalid input. Please enter exactly two numbers!")
except ValueError:
    print("Invalid input. Please enter exactly two numbers!")