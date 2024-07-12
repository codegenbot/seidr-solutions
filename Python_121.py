class Solution:
    def count_odd_numbers(self):
        lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
        return len([i for i in lst if i % 2 != 0])

s = Solution()
print(s.count_odd_numbers())