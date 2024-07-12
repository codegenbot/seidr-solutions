try:
    lst = input("Enter a list of numbers separated by space: ").split()
    int_lst = [int(i) for i in lst if i.lstrip('-').isdigit()]
    if int_lst:
        print(sum_squares(int_lst))
    else:
        print("No valid numbers provided.")

except ValueError as e:
    print("Invalid input. Please enter numeric values.")