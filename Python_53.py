```python
def add():
    while True:
        try:
            choice = input("Do you want to continue (Y/N)? ")
            if choice.upper() != 'Y' and choice.upper() != 'N':
                raise ValueError('Invalid choice. Please enter Y or N.')
            if choice.upper() == 'N':
                return
            x = int(input("Enter the first number: "))
            y = int(input("Enter the second number: "))
            print(x + y)
        except ValueError:
            print("Invalid input. Please enter a valid integer.")