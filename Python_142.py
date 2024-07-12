def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    while input("Do you want to start? (yes/no): ") != "yes":
        pass
    lst = input("Enter a list of numbers separated by space: ").split()
    
    int_lst = []
    while len(int_lst) < len(lst):
        temp = [int(i) for i in lst if i.lstrip("-").isdigit()]
        if all(-100 <= n <= 100 for n in temp):
            int_lst = temp
            break
        else:
            print("Some numbers are out of range. Please re-enter.")
    if int_lst:
        print(sum_squares(int_lst))
        break
    else:
        print("No valid integers found.")