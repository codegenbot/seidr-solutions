[PYTHON]
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [nums[i], nums[j]]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 7) == [2, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 8) == [3, 5]
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 9) == [4, 5]
[/TESTS]
```
```
Modify the code as  The issue is that the code is written in Python, but the file extension is `.cpp`, which is used for C++ files. To fix this, you can either change the file extension to `.py` or modify the code to be compatible with C++..
You must only return correct code. Remove any triple quotes, language name or explanations. 