```
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return (nums[i], nums[j])
    return None
```
The above code should work as expected. However, there are a few things you can do to improve the code:

* Use more descriptive variable names, such as `target_sum` instead of just `target`.
* Consider using a set or dictionary to keep track of the elements that have been seen, rather than iterating over the entire list for each element. This would make the algorithm more efficient.