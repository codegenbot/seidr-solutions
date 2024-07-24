def double_the_difference():
    odd_sum = 0
    lst = input().split()
    for item in map(int, lst):
        if item % 2 != 0:
            odd_sum += item**2
    return str(odd_sum*2)

print(double_the_difference())