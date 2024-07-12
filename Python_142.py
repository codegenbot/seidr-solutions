def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    response = input("Do you want to start? (yes/no): ")
    if response.lower() != "yes":
        continue
    user_input = input("Enter a list of numbers separated by space: ").split()
    
    try:
        int_lst = [int(i) for i in user_input]
    except ValueError:
        print("Some numbers are out of range. Please re-enter.")
        continue
    
    if all(-100 <= n <= 100 for n in int_lst):
        print(sum_squares(int_lst))
        break
    else:
        print("Some numbers are out of range. Please re-enter.")