Here is the modified code:

```Python
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    lst = input("Enter a list of numbers separated by spaces: ")
    try:
        lst = [int(i) for i in lst.split()]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(sum_squares(lst))