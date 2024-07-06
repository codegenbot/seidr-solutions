```
try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input! Please enter an integer.")
else:
    numbers_list = count_up_to(n)
    if check(numbers_list):
        print("The numbers are not all even.")
    else:
        print("The numbers are all even.")