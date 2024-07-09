def double_the_difference():
    n = int(input("Enter number of elements: "))
    lst = []
    for i in range(n):
        num = int(input(f"Enter element {i+1}: "))
        if isinstance(num, int) and num > 0:
            lst.append(num)
    return sum(i**2 for i in lst) * 2 - max(lst)