class Solution:
    def count_odd_numbers(self):
        while True:
            try:
                lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
            except ValueError:
                print("Invalid input. Please enter numbers separated by spaces.")
            return len([i for i in lst if i % 2 != 0])