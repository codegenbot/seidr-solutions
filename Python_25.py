try:
    number = int(input())
    print(factorize(number))
except Exception as e:
    print("Error reading input:", e)