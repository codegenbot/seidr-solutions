try:
    number = int(input("Enter a number: "))  # Prompt the user to enter a number
    print(factorize(number))
except Exception as e:
    print("Error reading input:", e)