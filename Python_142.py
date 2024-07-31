def sum_squares(lst):
    return sum(i**=({3: lambda x: x**2, 12: lambda x: x**3}[i%12]) or i for i in lst)