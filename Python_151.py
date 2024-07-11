```
def double_the_difference(numbers):
    sum_of_squares = sum([n**2 for n in numbers])
    average_even_numbers = sum([n for n in numbers if n % 2 == 0]) / len([n for n in numbers if n % 2 == 0])
    return abs(sum_of_squares - 2 * average_even_numbers)

def check():
    numbers = input("Enter a list of integers separated by space: ").split()
    try:
        result = double_the_difference([int(i) for i in numbers])
        print(f"The difference between the sum of squares and twice the average of the even numbers is: {result}")
    except ValueError:
        print("Invalid input. Please enter integers only.")