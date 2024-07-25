def sum_squares():
    lst = list(map(int, input("Enter numbers separated by spaces: ").split()))
    return round(sum([round(x)**2 for x in lst]))

print(sum_squares())