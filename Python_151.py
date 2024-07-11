def double_the_difference(lst):
    total = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    print(4*total - reduce(lambda x, y: x+y, map(lambda x: x*x, filter(lambda x: x>0, map(int, lst)))))


lst = [1,2,3]

double_the_difference(lst)