def process_numbers():
    try:
        numbers = [int(x) for x in input("Enter numbers separated by commas:").strip().split(",")]
        return numbers
    except ValueError:
        print("Input error. Please enter numbers separated by commas.")

result = process_numbers()
print(result)