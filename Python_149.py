```
def sorted_list_sum(lst):
    nums = [int(word) for word in lst if word.isdigit() and int(word) % 2 == 0]
    return sum(nums)