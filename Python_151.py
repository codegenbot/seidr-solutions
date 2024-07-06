def double_the_difference(lst=None):
    if lst is None:
        lst = list(map(int, input("Enter numbers separated by space: ").split()))
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)