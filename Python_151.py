```
def double_the_difference():
    lst = input("Enter a list of integers: ")
    try:
        lst = [int(i) for i in lst.split()]
        return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    except ValueError:
        return "Error: Please enter only integers."