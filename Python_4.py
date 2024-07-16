numbers = []
while True:
    try:
        numbers = list(map(float, input().split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")