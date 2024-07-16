while True:
    try:
        n = int(input("Enter the number of elements: ").strip())
        numbers = list(map(float, input("Enter the numbers separated by space: ").strip().split()))

        if len(numbers) == n:
            break
        else:
            print("Input error. Number of elements entered does not match the specified count.")

    except ValueError:
        print("Input error. Please enter valid integers/floats separated by space.")