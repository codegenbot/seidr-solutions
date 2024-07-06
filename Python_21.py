```
if __name__ == "__main__":
    while True:
        numbers = input("Enter space-separated numbers: ").split()
        if any(num.replace('.', '',).replace('-', '').isdigit() for num in numbers):
            try:
                result = rescale_to_unit([float(x) for x in numbers])
                print(result)
                break
            except ValueError as e:
                print(f"Error: {e}")
        else:
            print("Invalid input. Please enter at least one number.")