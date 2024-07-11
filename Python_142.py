```Python
while True:
    lst = input("Enter a list of numbers separated by spaces: ")
    try:
        lst = [int(i) for i in lst.split()]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(sum_squares(lst))