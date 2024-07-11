```
def double_the_difference():
    numbers = input("Enter the list of numbers separated by space: ").split()
    numbers = [int(i) for i in numbers]
    return sum([i**2 for i in numbers])