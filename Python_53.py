def get_median(lst):
    lst = list(map(int, input("Enter a series of space-separated numbers: ").split()))
    lst.sort()
    n = len(lst)
    if n % 2 == 0:
        return (lst[n//2 - 1] + lst[n//2]) / 2
    else:
        return lst[n // 2]