while True:
    try:
        threshold = int(input("Enter a threshold number: ").strip())
        break
    except ValueError:
        print("Invalid input. Please enter a numeric value for the threshold.")