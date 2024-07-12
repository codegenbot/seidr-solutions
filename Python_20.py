try:
    numbers = [float(num) for num in input('Enter space-separated numbers: ').split()]
except ValueError:
    print("Please enter space-separated numbers only")