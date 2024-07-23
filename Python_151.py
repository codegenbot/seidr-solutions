def check():
    a = input().split()
    b = [int(x) for x in a]
    print(double_the_difference(b))
    
def double_the_difference(lst):
    return (sum(i**2 for i in lst if isinstance(i, int) and i > 0) - sum(i for i in lst if isinstance(i, int)) ** 2) / abs(sum(i for i in lst if isinstance(i, int)))