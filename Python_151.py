```
print(
    "Enter elements separated by comma: "
)
user_input = input()
try:
    lst = [int(x.strip()) for x in user_input.split(',')]
    if len(lst) != 2:
        print("Please enter exactly two numbers!")
    else:
        print(double_the_difference(lst))
except ValueError:
    print("Invalid input. Please enter exact two numeric values!")