```
def double_the_difference():
    lst = input("Enter the list of numbers (space separated): ").split()
    try:
        result = sum(i**2 for i in map(int, lst) if int(i) % 2 != 0)
    except ValueError:
        return "Invalid input. Please enter a list of integers."
    return str(result)