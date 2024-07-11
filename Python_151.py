def double_the_difference():
    numbers = list(map(int, input("Enter space-separated integers: ").split()))
    return sum([i**2 for i in numbers])