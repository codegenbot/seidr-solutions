```
while True:
    try:
        result = decode_shift()
        print(result)
        break
    except ValueError as e:
        print("Invalid input. Please enter a single uppercase letter as the password.")