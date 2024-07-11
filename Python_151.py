```
print("Enter elements separated by space: ")
user_input = input()
try:
    lst = [x for x in user_input.split() if x.strip()]
    if len(lst) != 2 or any(not num.isdigit() for num in lst):
        print("Invalid input. Please enter exactly two numbers!")
    else:
        lst = list(map(int, lst))
        print(double_the_difference(lst))
except ValueError:
    print("Invalid input. Please enter exactly two numbers!")