```
class Solution:
    def count_odd_numbers(self, lst):
        return len([i for i in lst if i % 2 != 0])