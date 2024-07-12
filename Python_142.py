```
while True:
    try:
        lst = input("Enter a list of numbers separated by space: ").split()
        if not all(i.lstrip("-").isdigit() for i in lst):
            print("Invalid input. Please enter numeric values.")
            continue
        int_lst = [int(i) for i in lst]
        if all(-100 <= n <= 100 for n in int_lst):
            print(sum_squares(int_lst))
            break
        else:
            print("Some numbers are out of range.")
    except ValueError as e:
        print(f"Invalid input. Please enter numeric values: {e}. Try again!")