def double_the_difference(lst):
    for i in lst:
        diff = (lst[i] - lst[i+1])*2
        print(diff)

double_the_difference([1, 3, 2, 0])
double_the_difference([-1, -2, 0])
double_the_difference([9, -2])
double_the_difference([0])
