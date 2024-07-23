def check():
    lst = list(map(int, input().split()))
    print(double_the_difference(lst))

def double_the_difference(lst):
    return (sum(i**2 for i in lst if isinstance(i, int) and i > 0) - sum(i for i in lst if isinstance(i, int)) ** 2) / abs(sum(i for i in lst if isinstance(i, int)))