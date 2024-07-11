```
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    lst = input("Enter a list of numbers separated by spaces: ")
    try:
        result = [int(x) for x in lst.split()]
        print(sum_squares(result))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")