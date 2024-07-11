def double_the_difference():
    lst = input("Enter a list of integers: ")
    try:
        return sum(i**2 for i in map(int, lst.split()) if isinstance(i, int) and i >= 0 and i % 2 != 0)
    except ValueError:
        return "Error: Invalid input. Please enter a list of integers."