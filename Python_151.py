```
def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]

lst = input("Enter a list of numbers (space separated): ")
while True:
    try:
        lst = [int(x) for x in lst.split()]
        break
    except ValueError:
        lst = input("Invalid input. Please enter a list of numbers (space separated): ")

print(double_the_difference(lst))