def double_the_difference():
    lst = [
        int(num)
        for num in input("Enter a series of numbers separated by space: ").split()
    ]
    return sum(i**2 for i in lst)