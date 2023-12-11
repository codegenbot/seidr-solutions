def leaders(nums):
    # Initialize a stack to keep track of the current leader
    leaders = []
    
    # Iterate through the input vector
    for i in range(len(nums)):
        # If the current element is greater than or equal to the top element of the stack, add it to the leaders list
        if len(leaders) == 0 or nums[i] >= leaders[-1]:
            leaders.append(nums[i])
        # Otherwise, pop elements from the stack until the current element is greater than or equal to the top element of the stack
        else:
            while len(leaders) > 0 and leaders[-1] < nums[i]:
                leaders.pop()
    
    return leaders