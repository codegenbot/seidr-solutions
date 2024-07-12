def check():
    numbers = input("Enter space-separated integers: ").split()
    try:
        numbers = [int(i) for i in numbers]
    except ValueError:
        print("Invalid input")
        return
    result = double_the_difference(numbers)
    if result > 0:
        print(f"The difference is {result}")
    else:
        print("The difference is not positive")


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)