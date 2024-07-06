while True:
    try:
        num_strings = int(input("Enter the number of strings: "))
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

for _ in range(num_strings):
    strings = input("Enter a string: ")
    reversed_string = strings[::-1]
    print(reversed_string)