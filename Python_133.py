def sum_squares():
    lst = list(map(int, input("Enter space-separated numbers: ").split()))
    return round(sum([round(x)**2 for x in lst]))

print(sum_squares())