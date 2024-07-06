```
while True:
    try:
        num_strings = int(input("Enter the number of strings: "))
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

for _ in range(num_strings):
    while True:
        strings = input("Enter a string (or 'stop' to finish): ")
        if strings.lower() == 'stop':
            break
        elif strings.isdigit():
            try:
                num = int(strings)
                print(f"The number is: {num}")
            except ValueError:
                print("Invalid input. Please enter an integer or 'stop'.")
        else:
            reversed_string = strings[::-1]
            print(reversed_string)