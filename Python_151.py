def check():
    numbers = [int(x) for x in input("Enter the list of integers (space-separated): ").split()]
    print(double_the_difference(numbers))

def double_the_difference(lst):
    return (sum(i**2 for i in lst if isinstance(i, int) and i > 0) - sum(i for i in lst if isinstance(i, int)) ** 2) / abs(sum(i for i in lst if isinstance(i, int)))