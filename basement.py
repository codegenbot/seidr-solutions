Solve the following code contest problem: basement. Problem description: Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.

def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            return i
        curr_sum += arr[i]
    return -1