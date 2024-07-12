while True:
    try:
        array = list(map(int, input("Enter an array: ").split()))
        sort_array(array)
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")