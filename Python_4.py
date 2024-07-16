try:
    numbers = list(map(int, input().split()))
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please make sure to enter numbers separated by spaces.")
except:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")