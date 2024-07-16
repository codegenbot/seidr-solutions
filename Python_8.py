while True:
    try:
        input_numbers = list(map(int, input("Enter numbers separated by spaces: ").strip().split()))
        break
    except:
        print("Invalid input. Please enter numbers separated by spaces.")