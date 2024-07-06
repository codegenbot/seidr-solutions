```
def remove_duplicates(input_str=None):
    if input_str is None:
        while True:
            numbers = input("Enter comma-separated numbers: ")
            try:
                return list(dict.fromkeys(map(int, numbers.split(","))))
                break
            except ValueError:
                print("Invalid input. Please enter a comma-separated list of numbers.")