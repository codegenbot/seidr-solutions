while True:
    try:
        input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(',')))
        break
    except:
        print("Invalid input. Please enter comma-separated numbers.")