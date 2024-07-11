def double_the_difference():
    lst = input("Enter a list of integers: ").split()
    try:
        return sum(int(i) ** 2 for i in lst if int(i) >= 0 and int(i) % 2 != 0)
    except ValueError:
        return "Error: All elements must be integers."