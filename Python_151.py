```python
def double_the_difference(lst):
    if len(lst) == 2:
        a, b = map(int, lst)
        return abs(a - b) * 2
    else:
        print("Please enter exactly two numbers!")

print("Enter elements separated by comma: ")
user_input = input()
try:
    lst = [int(x) for x in user_input.split(',')]
    print(double_the_difference(lst))
except ValueError:
    print("Invalid input. Please enter exactly two numbers!")