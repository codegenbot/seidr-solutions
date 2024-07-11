```
def double_the_difference(numbers):
    even_sum = sum(num for num in numbers if int(num) % 2 == 0)
    square_sum = sum(int(num) ** 2 for num in numbers)
    average = even_sum / len([num for num in numbers if int(num) % 2 == 0])
    return (square_sum - (2 * average * len(numbers))) 

def check():
    numbers = input("Enter a list of integers separated by space: ").split()
    try:
        result = double_the_difference([int(i) for i in numbers])
        print(f"The difference between the sum of squares and twice the average of the even numbers is: {result}")
    except ValueError:
        print("Invalid input. Please enter integers only.")