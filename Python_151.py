```
def double_the_difference(lst):
    lst.sort()
    if len(lst) < 2:
        return 0
    return (lst[-1] - lst[0]) * 2

def check():
    while True:
        try:
            lst = [int(i) for i in input("Enter elements separated by space: ").split()]
            if len(lst) < 2:
                print("Please enter at least two numbers.")
            else:
                print(double_the_difference(lst))
                break
        except ValueError:
            print("Invalid input. Please enter numbers only.")

check()