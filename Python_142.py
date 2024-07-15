``` 
def sum_squares():
    lst = input("Enter the list of integers (space separated): ")
    lst = [int(num) for num in lst.split()]
    if len(lst) == 0:
        return 0
    total = sum([num**2 for num in lst])
    return total