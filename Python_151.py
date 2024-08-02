def check():
    numbers = list(map(int, input("Enter space-separated integers: ").split()))
    result = double_the_difference(numbers)
    print(f"The doubled difference is {result}")