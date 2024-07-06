def add(x: int, y: int) -> int:
    return x + y

if __name__ == '__main__':
    # Get user input
    x = int(input('Enter first number: '))
    y = int(input('Enter second number: '))

    # Call add function with user input
    result = add(x, y)

    # Print output
    print(f'The sum of {x} and {y} is {result}.')