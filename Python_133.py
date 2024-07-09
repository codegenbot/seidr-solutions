def sum_squares(lst):
    return sum(int(num)**2 for num in map(lambda x: -(-x//1), lst))