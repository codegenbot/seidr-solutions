```Python
while True:
    try:
        num_strings = int(input("Enter the number of strings: "))
        if num_strings <= 0:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

for _ in range(num_strings):
    while True:
        strings = input("Enter a string (or 'stop' to finish): ")
        if strings.lower() == 'stop':
            break
        try:
            for word in strings.split():
                print(word[::-1])
        except AttributeError:
            print("Invalid input. Please enter a valid string.")