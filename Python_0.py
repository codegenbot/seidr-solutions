while True:
    threshold = input("Enter a threshold number: ").strip()
    if threshold.isnumeric():
        threshold = int(threshold)
        break
    print("Invalid input. Please enter a numeric value for the threshold.")