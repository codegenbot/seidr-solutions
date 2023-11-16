
def add_elements(arr, k):
    """
    Given a non-empty array of integers arr and an integer k, return
    the sum of the elements with at most two digits from the first k elements of arr.

    Example:

        Input: arr = [111,21,3,4000,5,6,7,8,9], k = 4

    # Your code here


# Test Cases


def test_function(test_case):
    arr = test_case[0]
    k = test_case[1]
    solution = test_case[2]
    output = add_elements(arr, k)
    if output == solution:
        print("Pass")
    else:
        print("Fail")


arr = [111, 21, 3, 4000, 5, 6, 7, 8, 9]
k = 4
solution = 24  # sum of 21 + 3
test_case = [arr, k, solution]
test_function(test_case)

arr = [11, 22, 333, 44, 555, 666, 7777, 888, 9999]
k = 4
solution = 1020  # sum of 22 + 333 + 44 + 555
test_case = [arr, k, solution]
test_function(test_case)
        Output: 24 # sum of 21 + 3

    Constraints:
        1. 1 <= len(arr) <= 100
        2. 1 <= k <= len(arr)
    """
