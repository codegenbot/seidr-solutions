```
def find_closest_elements():
    def check(nums, target, left=0):
        l = r = left
        while l <= r:
            m = (l+r)//2
            if nums[m] == target:
                return [nums[i-1], nums[i+1]] if i > 0 else [-float('inf'), nums[i+1]]
                return [nums[i-1], nums[i+1]] if i < len(nums) - 1 else [nums[i-1], nums[i+1] or [nums[0], nums[-1]]
            elif target < nums[m]:
                r = m - 1
            else:
                l = m + 1
        return [target, target]
    pass