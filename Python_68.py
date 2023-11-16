# Complete the following code given the task description and function signature.

def pluck(nodes):
    """
    Given an array representing a branch of a tree that has non-negative integer nodes
    your task is to pluck one of the nodes and return it.
    The plucked node should be the node with the smallest even value.
    If multiple nodes with the same smallest even value are found return the node that has smallest index.

    The plucked node should be returned in a list, [ smallest_value, its index ],
    If there are no even values or the given array is empty, return [].

    Example 1:
        Input: [7, 9, 7, 1]
        Output: []
        Explanation: There are no even values

    Example 2:
        Input: [4, 6, 8, 10]
        Output: [4, 0]
        Explanation: 4 has the smallest even value, and 4 has the smallest index.

    Example 3:
        Input: []
        Output: []

    Example 4:
        Input: [1, 3, 5, 7]
        Output: []
        Explanation: There are no even values

    Constraints:
        * 1 <= nodes.length <= 10000
        * 0 <= node.value
    """
