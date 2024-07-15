def sum_squares():
    lst = [int(i) for i in input("Enter numbers (space-separated): ").split()]
    if len(lst) == 0:
        return 0
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num**2
        else:
            raise ValueError("The list must contain only integers.")
    return total