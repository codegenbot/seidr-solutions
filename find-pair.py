def find_pair(nums, target):
    # create a dictionary to store the elements and their indices
    nums_dict = {num: i for i, num in enumerate(nums)}
    
    # loop through the dictionary and check if the complement of the current element is present
    for i, (num1, _) in enumerate(nums_dict.items()):
        complement = target - num1
        if complement in nums_dict and nums_dict[complement] != i:
            return [num1, complement]
    
    # if no pair is found, return an empty list
    return []