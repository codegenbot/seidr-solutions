def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    try:
        input_str = input("Enter a list of numbers separated by spaces: ")
        lst = [int(i) for i in input_str.split()]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

print(sum_squares([i**2 for i in lst]))