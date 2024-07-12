```
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    if input("Do you want to start? (yes/no): ") != "yes":
        continue
    while True:
        try:
            lst = input("Enter a list of numbers separated by space: ").split()
            int_lst = [int(i) for i in lst]
            if all(-100 <= n <= 100 for n in int_lst):
                print(sum_squares(int_lst))
                break
            else:
                print("Some numbers are out of range.")
        except ValueError:
            print("Invalid input. Please enter only numbers separated by space.")