def solution():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    if not lst:
        return 0
    return sum(1 for _ in lst[::2]) / len(lst)