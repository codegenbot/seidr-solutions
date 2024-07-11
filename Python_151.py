def double_the_difference():
    numbers = input("Enter some space-separated numbers: ")
    lst = list(map(int, numbers.split()))
    return sum(i**2 for i in lst)