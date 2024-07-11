```python
def double_the_difference(numbers):
    even_sum = sum(i for i in numbers if i % 2 == 0)
    square_sum = sum(i ** 2 for i in numbers)
    return abs(square_sum - (2 * even_sum))

def check():
    numbers = input("Enter a list of integers separated by space: ").split()
    try:
        result = double_the_difference([int(i) for i in numbers])
        print(f"The difference between the sum of squares and twice the average of the even numbers is: {result}")
    except ValueError:
        print("Invalid input. Please enter integers only.")