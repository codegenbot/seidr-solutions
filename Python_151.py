```
def check(function):
    lst = input("Enter a list of numbers (space separated): ").split()
    try:
        print("Double the difference is:", function([int(x) for x in lst]))
    except Exception as e:
        print("An error occurred: ", str(e))

check(double_the_difference)