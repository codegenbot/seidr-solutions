numbers = input("Enter numbers separated by space: ").split()
def sum_squares(lst):
    return round(sum([round(int(x))**2 for x in lst]))