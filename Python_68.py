
def pluck(nodes):
    """
    "Given an array representing a branch of a tree that has non-negative integer nodes
    your task is to pluck one of the nodes and return it.
    The plucked node should be the node with the smallest even value.
    If multiple nodes with the same smallest even value are found return the node that has smallest index.

    The plucked node should be returned in a list, [ smalest_value, its index ],
    If there are no even values or the given array is empty, return [].

    Example 1:
        Input: [4,2,3]
        Output: [2, 1]
        Explanation: 2 has the smallest even value, and 2 has the smallest index.

    Example 2:
        Input: [1,2,3]
        Output: [2, 1]
        Explanation: 2 has the smallest even value, and 2 has the smallest index. 

    Example 3:
        Input: []
        Output: []
    
    Example 4:
        Input: [5, 0, 3, 0, 4, 2]
        Output: [0, 1]
        Explanation: 0 is the smallest value, but  there are two zeros,
                     so we will choose the first zero, which has the smallest index.

    Constraints:
        * 1 <= nodes.length <= 10000

    # Complete the following code given the task description and function signature.
    # You can add more functions if needed.
    smallest_value = None
    smallest_index = None
    for i, node in enumerate(nodes):
        if node % 2 == 0:
            if smallest_value is None or node < smallest_value:
                smallest_value = node
                smallest_index = i
    if smallest_value is None:
        return []
    return [smallest_value, smallest_index]


# Tests

print(pluck([4, 2, 3]))
print(pluck([1, 2, 3]))
print(pluck([]))
print(pluck([5, 0, 3, 0, 4, 2]))
        * 0 <= node.value
    """
