```
class Solution:
    def solution(self, lst):
        return len([i for i in lst if i % 2 != 0])

solution = Solution()
print(check(solution))