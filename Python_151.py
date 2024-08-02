def check():
    lst = input("Enter the list of numbers: ").split()
    try:
        lst = [int(i) for i in lst]
        print(double_the_difference(lst))
    except ValueError:
        print("Invalid input. Please enter integers only.")

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

check()