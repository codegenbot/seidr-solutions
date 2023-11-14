

def pairs_sum_to_zero(input_list):
    """
    pairs_sum_to_zero takes a list of integers as an input.
    it returns True if there are two distinct elements in the list that
    sum to zero, and False otherwise.
    i = 0
    while i < len(input_list):
        j = i+1
        while j < len(input_list):
            if input_list[i] + input_list[j] == 0:
                return True
            j = j + 1
        i = i + 1
    return False

print(pairs_sum_to_zero([1, 3, 5, 0]))
print(pairs_sum_to_zero([1, 3, -2, 1]))
print(pairs_sum_to_zero([1, 2, 3, 7]))
print(pairs_sum_to_zero([2, 4, -5, 3, 5, 7]))
print(pairs_sum_to_zero([1]))
    """
