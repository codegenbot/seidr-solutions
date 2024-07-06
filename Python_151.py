def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)


odd_sum = sum(
    i
    for i in input("Enter space-separated integers: ").split()
    if isinstance(int(i), int) and int(i) > 0
)
print(double_the_difference([int(x) for x in input().split()]))