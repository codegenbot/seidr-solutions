while True:
    threshold = input("Enter a threshold number: ")
    if threshold.isdigit():
        threshold = int(threshold)
        break
    print("Invalid input. Please enter a numeric value for the threshold.")