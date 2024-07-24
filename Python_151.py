```
def check():
    lst = [int(i) for i in input("Enter the list of numbers (space-separated): ").split()]
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    print(odd_sum)

check()