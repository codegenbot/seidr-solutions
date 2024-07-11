def sum_squares(lst):
    total = 0
    for i in lst:
        total += i**2
    return total

while True:
    try:
        input_str = input("Enter a list of numbers separated by spaces: ")
        lst = [int(i) for i in input_str.split()]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(sum_squares(lst))