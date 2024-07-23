def double_the_difference(lst1, lst2):
    total = sum(num**2 for num in lst1 if isinstance(num, int) and num >= 0)
    odd_sum = sum(num for num in lst2 if isinstance(num, int) and num % 2 != 0)
    return abs(total - odd_sum) // len(lst2) * 2

check(double_the_difference([int(i) for i in input("Enter numbers (space separated): ").split()], [int(i) for i in input("Enter other numbers (space separated): ").split()))