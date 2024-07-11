```
def double_the_difference(numbers):
    even_numbers = [n for n in numbers if n % 2 == 0]
    average_even = sum(map(int, even_numbers)) / len(even_numbers)
    difference_sum_of_squares_twice_average_even = (sum(map(lambda x: x ** 2, map(int, numbers))) - 2 * average_even * len(numbers)) * 2
    return difference_sum_of_squares_twice_average_even

def check():
    numbers = input("Enter a list of integers separated by space: ").split()
    try:
        result = double_the_difference([int(i) for i in numbers])
        print(f"The difference between the sum of squares and twice the average of the even numbers is: {result}")
    except ValueError:
        print("Invalid input. Please enter integers only.")