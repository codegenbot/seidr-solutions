```
def mean_absolute_deviation(numbers):
    avg = sum(numbers) / len(numbers)
    return sum(abs(num - avg) for num in numbers) / len(numbers)

def main():
    while True:
        try:
            numbers = list(map(float, input("Enter numbers separated by space: ").split()))
            print(mean_absolute_deviation(numbers))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by space.")

if __name__ == "__main__":
    main()