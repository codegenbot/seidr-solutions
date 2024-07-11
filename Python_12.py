```
while True:
    num_strings = input("Enter the number of strings: ")
    if num_strings.isdigit():
        break
    else:
        print("Invalid input. Please enter a positive integer.")

strings = [input("Please enter a string: ") for _ in range(int(num_strings))]
print(longest(strings)) if longest(strings) else print("No strings provided.")