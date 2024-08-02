def check():
    numbers = input("Enter a list of numbers separated by space: ").split()
    result = double_the_difference(numbers)
    print(f"The double difference is {result}.")


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)