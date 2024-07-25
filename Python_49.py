```python
def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def main():
    print("Please enter a positive integer to check if it's prime.")
    while True:
        try:
            num = int(input("Enter a number: "))
            if num < 2:
                print("Please enter a positive integer.")
            else:
                print(is_prime(num))
                break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

if __name__ == "__main__":
    main()