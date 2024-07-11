def double_the_difference():
    numbers = input("Enter the numbers separated by space: ").split()
    lst = [int(num) for num in numbers]
    return sum(i**2 for i in lst)