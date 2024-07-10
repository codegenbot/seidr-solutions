```
def sum_of_odd_numbers_in_every_other_element():
    while True:
        try:
            numbers = list(map(int, input("Enter the elements of a list separated by space: ").split()))
            if not numbers:
                raise ValueError
            return sum(i for i in numbers[1::2] if i % 2 != 0) if len(numbers) > 1 else "No odd numbers found."
        except ValueError:
            print("Invalid input. Please try again.")

def main():
    result = sum_of_odd_numbers_in_every_other_element()
    print(f"The sum of odd numbers is {result}")

if __name__ == "__main__":
    main()