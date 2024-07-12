try:
    lst = input("Enter a list of numbers separated by space: ").split()
    int_lst = [int(i) for i in lst if i.lstrip("-").isdigit()]
    if all(-100 <= n <= 100 for n in int_lst):
        print(sum_squares(int_lst))
    else:
        print("Some numbers are out of range.")
except ValueError as e:
    print("Invalid input. Please enter numeric values.")
except Exception as e:
    print(f"Error: {e}")