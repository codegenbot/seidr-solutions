def check(lst): 
    return abs(double_the_difference(lst) - (sum(lst)/len(lst))) <= 0.5 * sum(lst)/len(lst)