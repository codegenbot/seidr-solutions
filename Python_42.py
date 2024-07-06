def incr_list():
    n = int(input("Enter a number: "))
    lst = list(range(1, n+1))
    return [i+1 for i in lst]

print(incr_list())