lst = []
while True:
    try:
        lst = input("Enter a list of numbers separated by space: ").split()
        int_lst = [int(i) for i in lst if i.lstrip('-').isdigit()]
        print(sum_squares(int_lst))
        break
    except ValueError:
        print("Invalid input. Please enter only numbers separated by spaces.")