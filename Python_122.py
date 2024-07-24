def add_elements():
    user_input = input("Enter space-separated numbers: ")
    arr = [int(x) for x in user_input.split()]

    k = int(input("Enter the number of elements to consider: "))

    result = sum(x for x in arr[:k] if 10 > abs(x) >= 1)

    print(f"The sum of absolute values between -10 and 1 is {result}")