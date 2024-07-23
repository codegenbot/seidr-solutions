def double_the_difference(lst1):
    lst2 = input("Enter a list of integers: ").split()
    return sum(
        i**2 for i in map(int, lst2) if isinstance(int(i), int) and int(i) % 2 != 0
    )