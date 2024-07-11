def double_the_difference(numbers):
    even_sum = sum([num for num in numbers if num % 2 == 0])
    avg_even = even_sum / len([num for num in numbers if num % 2 == 0])
    total_sum_squares = sum([num ** 2 for num in numbers])
    result = abs((total_sum_squares - 2 * len(numbers) * avg_even)) - 2 * avg_even
    return result

def check():
    numbers = input("Enter a list of integers separated by space: ").split()
    try:
        result = double_the_difference([int(i) for i in numbers])
        print(f"The difference between the sum of squares and twice the average of the even numbers is: {result}")
    except ValueError:
        print("Invalid input. Please enter integers only.")