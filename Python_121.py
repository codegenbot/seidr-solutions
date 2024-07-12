```
class Solution:
    def count_odd_numbers(self, lst):
        """Count the number of odd numbers in a list."""
        return len([i for i in lst if i % 2 != 0])