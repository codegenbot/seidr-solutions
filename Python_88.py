```
while True:
    try:
        array = list(map(int, input("Enter an array: ").split()))
        sort_array(array)
        response = input("Press Enter to continue or 'exit' to quit. ")
        if response.lower() == "exit":
            break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")