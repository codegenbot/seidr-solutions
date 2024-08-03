def double_the_difference():
    lst = input("Enter the list of numbers separated by space: ").split()
    return sum(i**2 for i in map(int, lst) if int(i) % 2 != 0)