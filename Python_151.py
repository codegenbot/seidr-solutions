def double_the_difference():
    lst = input("Enter the list of numbers: ").split()
    try:
        lst = [int(i) for i in lst]
    except ValueError:
        return "Invalid input. Please enter a list of integers."
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)