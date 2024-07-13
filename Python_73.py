```
def array_change(lst):
    max_diff = 0
    for i in range(1, len(lst)):
        diff = abs(int(lst[i]) - int(lst[i-1]))
        if diff > max_diff:
            max_diff = diff

    return max_diff


print("Welcome to the Array Change Problem!")

again = 'y'
while again.lower() == 'y':
    print("Welcome to the Array Change Problem!")
    while True:
        try:
            lst = list(map(int, input("Enter a space-separated list of numbers: ").split()))
            if len(lst) < 2 or any(x <= 0 for x in lst):
                print("List should contain at least two positive integers. Please enter again.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a space-separated list of numbers.")

    max_diff = array_change(lst)
    print(f"The maximum difference between any two adjacent elements is {max_diff}.")
    
    again = input("Do you want to try again? (y/n): ")