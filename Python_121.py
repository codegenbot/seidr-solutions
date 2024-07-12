```
class Solution:
    def count_odd_numbers(self):
        try:
            lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
            return len([i for i in lst if i % 2 != 0])
        except ValueError:
            return "Invalid input. Please enter valid integers."

s = Solution()
print(s.count_odd_numbers())