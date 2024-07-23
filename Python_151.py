def check(func):
    result = func([int(x) for x in input("Enter the numbers (space-separated): ").split()])
    print("The double difference is:", result)