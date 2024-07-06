```
while True:
    try:
        num_strings = int(input("Enter the number of strings: "))
        if num_strings > 0:
            break
        else:
            print("Invalid input. Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

for _ in range(num_strings):
    strings = input("Enter a string: ")
    reversed_string = strings[::-1]
    print(reversed_string)