```
def find_closest_elements():
    def check(sorted_nums, num):
        if len(sorted_nums) == 1:
            return sorted_nums[0]
        left_index = (len(sorted_nums) - 1) // 2
        right_index = len(sorted_nums) // 2
        left_value = sorted_nums[left_index]
        right_value = sorted_nums[right_index]
        if num <= left_value and num >= right_value:
            return right_value
        elif num < right_value:
            return check(sorted_nums[:right_index], num)
        else:
            return check(sorted_nums[right_index:], num)