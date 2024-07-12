```
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    if input("Do you want to start? (yes/no): ") != "yes":
        continue
    while True:
        try:
            numbers = [int(num) for num in input("Enter a list of numbers separated by space: ").split()]
            break
        except ValueError:
            print("Invalid input. Please enter only integers separated by spaces.")
    if all(-100 <= n <= 100 for n in numbers):
        print(sum_squares(numbers))
    else:
        print("Some numbers are out of range. Please re-enter.")