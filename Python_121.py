class Solution:
    def count_odd_numbers(self):
        try:
            lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
            print(f"Odd numbers count: {len([i for i in lst if i % 2 != 0])}")
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")